#include <iostream>
using namespace std;
string s;
long long n;
int main()
{
	cin >> s >> n;
	int len = s.length();
	while (n > len)
	{
		int x = len;
		while (x * 2 < n)
			x *= 2;
		n = n - x - 1;
		if (n == 0)
			n = x;
	}
	cout << s[n - 1];
	return 0;
}
