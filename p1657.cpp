#include <bits/stdc++.h>
using namespace std;
int a[114][2], n, ans = 0, book[114], v[114];
void dfs(int d){
    if(d == 1 && (v[d-1] != a[d-1][0] && v[d-1] != a[d-1][1])) return;
    if(d == n) ans++;
    for(int i = 1; i <= n; i++){
        if(!book[i]){
            v.push_back(i);
            book[i] = 1;
            dfs(d + 1);
            v.pop_back();
            book[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    dfs(0);
    cout << ans;
    return 0;
}