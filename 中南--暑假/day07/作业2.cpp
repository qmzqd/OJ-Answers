#include <bits/stdc++.h>
using namespace std;
bool c(const string& a, const string& b) {
    return b+a<a+b;
}
string l(int nums[], int n) {
    string numsStr[n];
    for (int i = 0; i < n; i++) {
        stringstream ss;
        ss << nums[i];
        numsStr[i] = ss.str();
    }
    sort(numsStr, numsStr + n, c);
    string r;
    for (int i = 0; i < n; i++) {
        r += numsStr[i];
    }
    if (r[0] == '0') {
        return "0";
    }
    return r;
}
int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i < n; i++) {
        cin>>nums[i];
    }
    string r=l(nums,n);
    cout<<r<<endl;
    return 0;
}