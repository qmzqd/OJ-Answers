#include<bits/stdc++.h>
using namespace std;
int sum,n;
bool isprime(int x){
    if(x<2)return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)if(isprime(i))sum++;
    cout<<sum;
    return 0;
}