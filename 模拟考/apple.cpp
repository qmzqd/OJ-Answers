#include <iostream>  
using namespace std;  
int n,day,n_day;
int main(){   
    cin>>n;
    while(n){
        day++;
        if(n%3==1&&n_day==0){
            n_day=day;
        }
        n-=(n+2)/3;
    }
    cout<<day<<" "<<n_day;
    return 0;  
}