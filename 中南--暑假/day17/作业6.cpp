#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int mal = 0;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        mal = max(mal, l);
    }
    int ml = 1;
    while (ml <= mal) {
        int mid = (ml + mal + 1) / 2;
        int chun = 0;
        for (int i = 0; i < n; i++) {
            chun += max(0, mal - mid) / mid;
        }
        if (chun >= k) {
            ml = mid + 1;
        } else {
            mal = mid - 1;
        }
    }
    cout << ml-1 << endl;
    return 0;
}