#include<bits/stdc++.h>
#pragma GCC optimize(3)
#define _for(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int N, M;
vector<int> e;
bool c(int m) {
    int co = 1;
    int ce = 0;
    for (int i = 0; i < N; i++) {
        if (e[i] > m) {
            return false; 
        }
        if (ce + e[i] > m) {
            co++;
            ce = e[i];
            if (co > M) {
                return false;
            }
        } else {
            ce += e[i];
        }
    }
    return true;
}
int main() {
    cin >> N >> M;
    e.resize(N);
    int t = 0;
    for (int i = 0; i < N; i++) {
        cin >> e[i];
        t += e[i];
    }
    int low = *max_element(e.begin(), e.end()); 
    int high = t; 
    int rr = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (c(mid)) {
            rr = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    } 
    cout << rr << endl;
    return 0;
}
