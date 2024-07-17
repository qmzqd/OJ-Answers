#include <iostream>
using namespace std;
int a, b;
int main()
{
	cin >> a >> b;
	if (a == 1)
	{
		if (b == 2)
			cout << 3;
		else if (b == 3)
			cout << 2;
	}
	else if (a == 2)
	{
		if (b == 1)
			cout << 3;
		else if (b == 3)
			cout << 1;
	}
	else if (a == 3)
	{
		if (b == 1)
			cout << 2;
		else if (b == 2)
			cout << 1;
	}
	return 0;
}
