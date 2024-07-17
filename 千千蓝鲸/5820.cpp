#include <iostream>
#include <algorithm>
using namespace std;
int n, mark, cnt;
struct stu
{
	int l, r;
} a[1005];
bool cmp(stu x, stu y)
{
	return x.r < y.r;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].l >> a[i].r;
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
	{
		if (mark <= a[i].l)
		{
			cnt++;
			mark = a[i].r;
		}
	}
	cout << cnt;
	return 0;
}
