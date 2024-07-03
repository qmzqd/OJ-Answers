#include <bits/stdc++.h>
using namespace std;
int n;
void flag(int n, char A, char B, char C)
{
	if (1 == n)
		printf("%c-%c\n", A, C);
	else
	{
		flag(n - 1, A, C, B);
		printf("%c-%c", A, C);
		cout << endl;
		flag(n - 1, B, A, C);
	}
}
int main()
{
	scanf("%d", &n);
	flag(n, 'A', 'B', 'C');
	return 0;
}
