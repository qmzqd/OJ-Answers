#include <iostream>  
#include <algorithm>  
using namespace std;  
struct s {  
    string name;  
    int chinese;  
    int math;  
    int english;  
    int total;  
};  
  
bool cmp(const s& a, const s& b) {  
    if (a.total != b.total) {  
        return a.total > b.total;  
    } else {  
        return a.name < b.name;  
    }  
}  
  
int main() {  
    int n;  
    cin >> n;  
    vector<s> ss(n);  
    for (int i = 0; i < n; i++) {  
        cin >> ss[i].name >> ss[i].chinese >> ss[i].math >> ss[i].english;  
        ss[i].total = ss[i].chinese + ss[i].math + ss[i].english;  
    }
    sort(ss.begin(), ss.end(), cmp);  
    cout << ss[0].name << " " << ss[0].chinese << " " << ss[0].math << " " << ss[0].english << endl;  
    return 0;  
}