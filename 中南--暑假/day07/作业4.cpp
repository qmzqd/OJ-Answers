#include <iostream>
#include <cmath>
using namespace std;
bool prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void dfs(int n, int k, int* num, int cu, int curSum, int qwer, int& pc) {
    if (cu == k) {
        if (prime(curSum)) {
            pc++;
        }
        return;
    }
    for (int i = qwer; i < n; i++) {
        dfs(n, k, num, cu + 1, curSum + num[i], i + 1, pc);
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin>>num[i];
    }
    int result = 0;
    dfs(n, k, num, 0, 0, 0, result);
    cout << result << endl;
    return 0;
}