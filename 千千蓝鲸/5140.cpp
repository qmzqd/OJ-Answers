#include <iostream>
#include <algorithm>
using namespace std;
int n;
struct stu
{
	int t, id;
} a[1005];
bool cmp(stu x, stu y)
{
	if (x.t == y.t) return x.id < y.id; 
	return x.t < y.t;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].t;
		a[i].id = i;
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= n; i++)
		cout << a[i].id << ' ';
	return 0;
}
