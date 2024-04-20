#include <bits/stdc++.h>
using namespace std;
int n, a[1005], k, top;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int b;
		cin >> b;
		while (k < b)
			a[++top] = ++k;
		if (b == a[top])
			top--;
		else
			break;
	}
	if (top > 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
