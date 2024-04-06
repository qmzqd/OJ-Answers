#include <bits/stdc++.h>
using namespace std;
int shenmebdongxi[1005][1005];
int main() {
    int r;
    cin >> r;
    int n[105][105];
    for (int i=0;i<r;i++) {
        for (int j=0;j<=i;j++) {
            cin>>n[i][j];
        }
    }
    shenmebdongxi[0][0]=n[0][0];
    for (int i=1;i<r;i++){
        for (int j=0;j<=i;j++){
            if (j==0){
                shenmebdongxi[i][j]=shenmebdongxi[i-1][j]+ n[i][j];
            } else if(j==i) {
                shenmebdongxi[i][j]=shenmebdongxi[i-1][j - 1] + n[i][j];
            } else{
                shenmebdongxi[i][j]=max(shenmebdongxi[i-1][j],shenmebdongxi[i-1][j-1])+n[i][j];
            }
        }
    }
    int m;
    for(int j=0;j<r; j++) {
        m=max(m,shenmebdongxi[r-1][j]);
    }
    cout<<m<<endl;
    return 0;
}