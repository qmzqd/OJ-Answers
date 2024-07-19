#include <iostream>
#include <cstdlib>     // srand函数 
#include <iomanip>   //设置域宽 
#include <ctime>    // 系统当前时间作为种子 
using namespace std;
int fun(int a,int b);   //设计一个函数为了可以一直继续游戏 
int main(){
 int a,b;
 cout << setw(40) << " " << "--------欢迎来到猜数字游戏！--------" << endl                //游戏菜单 
   << "  游戏规则：系统随机给出100以内的数字（整数），玩家输入自己猜的数字。" << endl
   << setw(12) << " " << "玩家有8次机会。猜对则游戏胜利，猜错则游戏失败。" << endl
   << setw(12) << " " << "玩家结束一次游戏可选择继续游戏或者退出游戏。" << endl ;
  for(int i=1;i<=35;i++)
      cout << "-*-" ;
  cout << endl ;
 cout << "输入猜测数字：" ; 
 fun(a,b);     //调用函数 
} 
int fun(int a,int b){
 srand((int)time(0));  //产生随机种子 
 a=rand()%100;
 cout << "输入猜测数字：" ; 
 for(int n=8;n>=0;n--){    //8次机会 
  int b, m ,s;     //设置提供线索的变量 
  cin >> b ;
  if(b==101)       //继续游戏条件 
   fun(a,b);
  else 
  if(b==102)      //结束游戏条件 
   return 0;
  else 
   if(b!=a){                                
    switch(n){                                           //用switch来进行玩家8次机会及提示 
     case 8 : cout << "猜错了！还有7次机会喔，再想想！" << endl ; break ;
     case 7 : cout << "又错啦！！再试一次。" << endl ; break;
     case 6 : cout << "好吧给你一点提示。" ;
        if(b<a) 
        cout << "这个数要比你输入的大" << endl;  
        else
         cout << "这个数要比你输入的小" << endl; break ; 
     case 5 : cout << "又错啦。" ; 
        if(a/10 <1) 
         cout << "这是个个位数。" << endl; 
        else{
         m=a%10;
        cout << "这是两位数且个位数是" << m << endl;} break ; 
     case 4 : cout << "不是！只剩3次机会了！最后一次提示！" ;
        if(a/10<1){
         s = a-5;
          if(s<0)
           cout << "个位数比5小" << endl ; 
         else 
          cout << "个位数比5大或者等于5" << endl ; break ; }
        else 
         s = a/10-5;
          if(s<0)
           cout << "十位数比5小" << endl ; 
          else 
           cout << "十位数比5大" << endl; break ; 
     case 3 : cout << "提示已经很多啦！怎么还没猜到。" << endl ; break ;
     case 2 : cout << "最后一次机会，碰运气吧。" << endl ; break ; 
     case 1 : cout << "很遗憾游戏失败。最终数字是" << a << "。按101继续游戏，按102退出游戏。" << endl ; break;                    
    }  
   } 
   else{
    cout << "猜对了！游戏胜利！按101继续游戏，按102退出游戏。" ; 
    } 
  } 
}
