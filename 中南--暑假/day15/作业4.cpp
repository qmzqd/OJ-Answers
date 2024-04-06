#include <bits/stdc++.h>
using namespace std;
int sb(int yalimasinei[10][10], int r, int cao) {
    int dp[10][10];
    int m = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < cao; j++) {
            dp[i][j] = 1;
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < cao; j++) {
            if(i > 0 && yalimasinei[i][j] > yalimasinei[i-1][j]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j] + 1);
            }
            if(i < r-1 && yalimasinei[i][j] > yalimasinei[i+1][j]) {
                dp[i][j] = max(dp[i][j], dp[i+1][j] + 1);
            }
            if(j > 0 && yalimasinei[i][j] > yalimasinei[i][j-1]) {
                dp[i][j] = max(dp[i][j], dp[i][j-1] + 1);
            }
            if(j < cao-1 && yalimasinei[i][j] > yalimasinei[i][j+1]) {
                dp[i][j] = max(dp[i][j], dp[i][j+1] + 1);
            }
            m = max(m, dp[i][j]);
        }
    }
    return m;
}
int main() {
    int r, cao;
    cin >> r >> cao;   
    int yalimasinei[10][10];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < cao; j++) {
            cin >> yalimasinei[i][j];
        }
    }
    int r = sb(yalimasinei, r, cao);
    cout << r << endl;
    return 0;
}