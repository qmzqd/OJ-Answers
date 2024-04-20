#include <iostream>
using namespace std;
int n, m, a[50005], length, l, r, b1, b2;
int main()
{
	cin >> length >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> b2;
		a[i] = b2 - b1;
		b1 = b2;
	}
	a[n] = length - b1;
	if (n == m)
	{
		cout << length;
		return 0;
	}
	l = 1;
	r = length / (n - m);
	while (l <= r)
	{
		int mid = l + (r - l) / 2, tmp, cnt = 0;
		for (int i = 0; i <= n; i++)
		{
			tmp = a[i];
			while (tmp < mid && i <= n)
			{
				i++;
				tmp += a[i];
				cnt++;
			}
		}
		if (cnt <= m)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << r;
	return 0;
}
