#include<bits/stdc++.h>
using namespace std;
int n;
void yuanshen(int n, char A, char B, char C)
{
	if (1 == n)
		printf("%c-%c\n", A, C);
	else
	{
		yuanshen(n-1, A, C, B);
		printf("%c-%c", A, C);
        cout<<endl;
		yuanshen(n-1, B, A, C);
	}
}
int main()
{
	scanf("%d", &n);
	yuanshen(n, 'A', 'B', 'C');
	return 0;
}
