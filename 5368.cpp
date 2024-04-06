#include <iostream>  
using namespace std;  
  
int main() {  
    int n, m;  
    cin >> n >> m;  
    int a[n];  
    for (int i = 0; i < n; i++) {  
        a[i] = i + 1;  
    }  
    while (n > 1) {  
        for (int i = 0; i < n; i++) {  
            if (i % m == 0) {  
                cout << a[i] << " ";  
                a[i] = -1;  
                n--;  
            }  
        }  
        cout << endl;  
    }  
    cout << a[0] << endl;  
    return 0;  
}