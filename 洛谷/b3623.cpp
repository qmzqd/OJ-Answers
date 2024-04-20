#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
vector<int> vec;
bool book[100];
int a, b;
void dfs(int n, int k)
{
	if (vec.size() == k)
	{
		for (int i = 0; i < vec.size(); i++)
			printf("%d ", vec[i]);
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			vec.push_back(i);
			book[i] = 1;
			dfs(n, k);
			book[i] = 0;
			vec.pop_back();
		}
	}
}
int main()
{
	cin >> a >> b;
	dfs(a, b);
	return 0;
}
