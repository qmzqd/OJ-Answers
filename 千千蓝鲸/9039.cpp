#include <iostream>
#pragma GCC optimize(3)
using namespace std;
int book[1005][1005];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> book[i][j];
        }
    }
    int ms = 0;
    bool p = false;
    int row_sum[1005] = {0}, col_sum[1005] = {0};
    // 预计算每行和每列的和
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row_sum[i] += book[i][j];
            col_sum[j] += book[i][j];
        }
    }
    // 遍历每个0元素计算得分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (book[i][j] == 0) {
                int score = row_sum[i] + col_sum[j];
                ms = max(ms, score);
                p = true;
            }
        }
    }
    if (p)
    {
        cout << ms << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}