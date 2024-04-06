#include <iostream>
using namespace std;
const int N=1e6+5,M=1e4;
int n,f[N],G[N];
int main() {
    cin>>n;
    f[0]=1,f[1]=1,G[1]=1;
    for(int i=2;i<=n;i++){
    //    总 =        只含    +  包含 L
        f[i]=((f[i-1]+f[i-2])%M+ G[i-2]*2)%M;
        G[i]=(f[i-1]+G[i-1])%M;
    }
    cout<<f[n];
    return 0;
}