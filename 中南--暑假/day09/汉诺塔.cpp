#include <bits/stdc++.h>//万能头文件
using namespace std;//标准化命名空间
int n,k;
void han(int n,char x,char y,char z){
    if(n==0) return;
    han(n-1,x,z,y);
    cout<<++k<<":"<<n<<" "<<x<<"---->"<<z<<endl;
    han(n-1,y,x,z);
}
int main(){
    cin>>n;
    han(n,'A','B','C');
    return 0;
}
