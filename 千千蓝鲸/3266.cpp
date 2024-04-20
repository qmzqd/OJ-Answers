#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> houzi;
    for (int i = 1; i <= n; i++)
    {
        houzi.push(i);
    }
    int count = 0;

    while (houzi.size() > 1)
    {
        count++;
        if (count == m)

        {
            houzi.pop();
            count = 0;
        }
        else

        {
            int front = houzi.front();
            houzi.pop();
            houzi.push(front);
        }
    }

    cout << houzi.front() << endl;
    return 0;
}