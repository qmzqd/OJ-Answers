#include<bits/stdc++.h>   
using namespace std;  
int b,g,r,i;
int main() {  
    string s;  
    cin >> s;   
    sort(s.begin(), s.end());  
    int count;  
    while (i < s.size()) {  
        if (s[i] == 'B') {  
            b++;  
            i++;  
        } else if (s[i] == 'G') {  
            g++;  
            i++;  
        } else if (s[i] == 'R') {  
            r++;  
            i++;  
        } else {  
            break;  
        }   
        if (b >= 3 && g >= 2 && r >= 1) {  
            count++;  
            b -= 3;  
            g -= 2;  
            r -= 1;  
        } else {
            break;  
        }  
    }  
    cout<<s<<endl;  
    cout<<count+1<<endl;  
    return 0;  
}