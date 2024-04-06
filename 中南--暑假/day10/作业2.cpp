#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<int> p(N);
    for(int i=0;i<N;i++) {
        cin>>p[i];
    }
    int r=0;
    for (int i=0;i<N-1;i++) {
        for (int j=0;j<N-i-1;j++) {
            if (p[j]>p[j+1]){
                swap(p[j],p[j+1]);
                r++;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}