#include <iostream>
using namespace std;
int n, k, a[100005];
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int l = 0, r = 100000000;
	while (l <= r && r != 0)
	{
		int mid = l + (r - l) / 2, cnt = 0;
		for (int i = 0; i < n; i++)
			cnt += a[i] / mid;
		if (cnt >= k)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << r;
	return 0;
}
