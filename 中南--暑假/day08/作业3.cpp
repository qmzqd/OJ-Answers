#include<iostream>
#include<cstring>
using namespace std;
int a,b,c,p[10],flag=1;
bool check(int n){
    int x=a*n,y=b*n,z=c*n;//三个 三位数
    memset(p,0,sizeof p);
    p[x%10]++; p[x/10%10]++; p[x/100]++;//剥离3位数 进行标记
    p[y%10]++; p[y/10%10]++; p[y/100]++;
    p[z%10]++; p[z/10%10]++; p[z/100]++;
    for(int i=1;i<=9;i++) //遍历1~9
        if(p[i]!=1) return 0;
    return 1;
}
int main(){
    cin>>a>>b>>c;
    for(int i=1;i<=1000/c;i++){
        memset(p,0,sizeof(p));
        if(check(i)){
            cout<<a*i<<" "<<b*i<<" "<<c*i<<endl;
            flag=0;
        }
    }
    if(flag) cout<<"NO!!!"<<endl;
    return 0;
}