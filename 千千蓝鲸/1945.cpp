#include <iostream>
using namespace std;
int on[114514], prime[114514], n, cnt;
void init(int n)
{
    on[0] = on[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (!on[i])
            prime[++cnt] = i;
        for (int j = 1; j <= cnt && i * prime[j] <= n; ++j)
        {
            on[i * prime[j]] = 1;
            // ���Ϊ��������
            if (i % prime[j] == 0)
                break;
        }
    }
    return;
}

int main()
{
    int a;
    cin >> a;
    init(a);
    int i = 2;
    while (1 > 0)
    {
        if (prime[i] == 0)
            break;
        i++;
    }
    cout << i - 1;
    return 0;
}
