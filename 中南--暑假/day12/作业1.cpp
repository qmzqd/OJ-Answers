#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    int cnt = 0;
    for (int i = 0; i <n - 1; i++) {
        if (c[i]+c[i+1]>x) {
            int e = c[i] + c[i + 1] - x;
            cnt += e;
            c[i + 1] -= e;
        }
    }
    cout <<cnt<<endl;
    return 0;
}