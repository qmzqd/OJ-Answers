#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> combinations;

void dfs(vector<int> &curr, int total, int index, int n)
{
  if (index == 10)
  {
    if (total == 0)
    {
      combinations.push_back(curr);
    }
    return;
  }

  for (int i = 0; i <= 3 && i <= total; i++)
  {
    curr[index] = i;
    dfs(curr, total - i, index + 1, n);
  }
}

int main()
{
  int n;
  cin >> n;

  vector<int> curr(10, 0);
  dfs(curr, n, 0, n);

  int count = combinations.size();
  if (count == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        cout << combinations[i][j] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}