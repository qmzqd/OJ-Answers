#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int s[1005];
    long long p[1005]={0};
    for (int i=0; i<n; i++) {
        cin>>s[i];
        if (i==0)
            p[i]=s[i];
        else
            p[i]=p[i-1] + s[i];
    }
    while(m--) {
        int L, R;
        cin>>L>>R;
        cout<<p[R-1]-(L>1?p[L-2]:0)<<endl;
    }
    return 0;
}