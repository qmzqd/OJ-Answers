#include <iostream>
#include <string>
using namespace std;
string t[8] = {"000","001","010","011","100","101","110","111"};
int main() {
    string s, r = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        r = r + t[s[i] - '0'];
    }
    while(r[0] == '0') {
        r.erase(0, 1);
    }
    if(r == "") {
        cout << 0;
    } else {
        cout << r;
    }
    return 0;
}