#include<bits/stdc++.h>
using namespace std;
int n;
bool isprime(int x){
if(x<2)cout<<"N";
for(int i=2;i*i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){


}