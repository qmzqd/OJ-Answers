#include <iostream>
using namespace std;
int n = 8, m = 2;
string s;
char a[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main()
{
	cin >> s;

	int sum = 0, k = 1, len = s.size();
	for (int i = len - 1; i >= 0; i--)
	{
		int b;
		if (s[i] > '9')
			b = s[i] - 'A' + 10;
		else
			b = s[i] - '0';
		sum += b * k;
		k *= n;
	}

	string out = "";
	long long tmp = 1;
	while (tmp * m <= sum)
		tmp *= m;
	while (tmp)
	{
		int c = sum / tmp;
		out += a[c];
		sum -= c * tmp;
		tmp /= m;
	}

	cout << out;
	return 0;
}
