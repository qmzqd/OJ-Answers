#include <bits/stdc++.h>
using namespace std;
void dfs(int arr[], int n, int r, int index, int data[], int i)
{
    if (i == r)
    {
        for (int j = 0; j < r; j++)
        {
            cout << setw(3) << data[j];
        }
        cout << endl;
        return;
    }
    if (index >= n)
        return;
    data[i] = arr[index];
    dfs(arr, n, r, index + 1, data, i + 1);
    dfs(arr, n, r, index + 1, data, i);
}
int main()
{
    int n, r;
    cin >> n >> r;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int data[r];
    dfs(arr, n, r, 0, data, 0);
    return 0;
}
