#include <iostream>
using namespace std;
int h(int n)
{
	if (n == 1)
		return 1;
	return h(n - 1) * n;
}
int main()
{
	int n;
	cin >> n;
	cout << h(n);
	return 0;
}
