#include <iostream>
using namespace std;
int n, t;
int main()
{
	cin >> n;
	int p = 1;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > p)
		{
			t += (x - p) * 6;
		}
		if (x < p)
		{
			t += (p - x) * 4;
		}
		p = x;
		t += 5;
	}
	cout << t;
	return 0;
}
