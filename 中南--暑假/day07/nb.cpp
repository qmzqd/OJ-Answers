#include <iostream>
#include <cstdlib>     // srand���� 
#include <iomanip>   //������� 
#include <ctime>    // ϵͳ��ǰʱ����Ϊ���� 
using namespace std;
int fun(int a,int b);   //���һ������Ϊ�˿���һֱ������Ϸ 
int main(){
 int a,b;
 cout << setw(40) << " " << "--------��ӭ������������Ϸ��--------" << endl                //��Ϸ�˵� 
   << "  ��Ϸ����ϵͳ�������100���ڵ����֣�����������������Լ��µ����֡�" << endl
   << setw(12) << " " << "�����8�λ��ᡣ�¶�����Ϸʤ�����´�����Ϸʧ�ܡ�" << endl
   << setw(12) << " " << "��ҽ���һ����Ϸ��ѡ�������Ϸ�����˳���Ϸ��" << endl ;
  for(int i=1;i<=35;i++)
      cout << "-*-" ;
  cout << endl ;
 cout << "����²����֣�" ; 
 fun(a,b);     //���ú��� 
} 
int fun(int a,int b){
 srand((int)time(0));  //����������� 
 a=rand()%100;
 cout << "����²����֣�" ; 
 for(int n=8;n>=0;n--){    //8�λ��� 
  int b, m ,s;     //�����ṩ�����ı��� 
  cin >> b ;
  if(b==101)       //������Ϸ���� 
   fun(a,b);
  else 
  if(b==102)      //������Ϸ���� 
   return 0;
  else 
   if(b!=a){                                
    switch(n){                                           //��switch���������8�λ��ἰ��ʾ 
     case 8 : cout << "�´��ˣ�����7�λ���ร������룡" << endl ; break ;
     case 7 : cout << "�ִ�����������һ�Ρ�" << endl ; break;
     case 6 : cout << "�ðɸ���һ����ʾ��" ;
        if(b<a) 
        cout << "�����Ҫ��������Ĵ�" << endl;  
        else
         cout << "�����Ҫ���������С" << endl; break ; 
     case 5 : cout << "�ִ�����" ; 
        if(a/10 <1) 
         cout << "���Ǹ���λ����" << endl; 
        else{
         m=a%10;
        cout << "������λ���Ҹ�λ����" << m << endl;} break ; 
     case 4 : cout << "���ǣ�ֻʣ3�λ����ˣ����һ����ʾ��" ;
        if(a/10<1){
         s = a-5;
          if(s<0)
           cout << "��λ����5С" << endl ; 
         else 
          cout << "��λ����5����ߵ���5" << endl ; break ; }
        else 
         s = a/10-5;
          if(s<0)
           cout << "ʮλ����5С" << endl ; 
          else 
           cout << "ʮλ����5��" << endl; break ; 
     case 3 : cout << "��ʾ�Ѿ��ܶ�������ô��û�µ���" << endl ; break ;
     case 2 : cout << "���һ�λ��ᣬ�������ɡ�" << endl ; break ; 
     case 1 : cout << "���ź���Ϸʧ�ܡ�����������" << a << "����101������Ϸ����102�˳���Ϸ��" << endl ; break;                    
    }  
   } 
   else{
    cout << "�¶��ˣ���Ϸʤ������101������Ϸ����102�˳���Ϸ��" ; 
    } 
  } 
}
