#include <iostream>  
#include <algorithm>  
using namespace std;  
struct s {  
    string name;  
    int ch;  
    int math;  
    int en;  
    int total;  
};  
  
bool cmp(int a,int b) {  
    if (a.total != b.total) {  
        return a.total > b.total;  
    } else {  
        return a.name < b.name;  
    }  
}  
  
int main() {  
    int n;  
    cin >> n;  
    string sb[1145];
    for (int i = 0; i < n; i++) {  
        cin >> sb[i].name >> sb[i].ch >> sb[i].math >> sb[i].en;  
        sb[i].total = sb[i].ch + sb[i].math + sb[i].en;  
    }
    sort(sb.begin(), sb.end(), cmp);  
    cout << sb[0].name<<" "<<sb[0].ch+sb[0].math+sb[0].en;
    return 0;  
}