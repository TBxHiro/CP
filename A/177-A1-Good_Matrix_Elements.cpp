//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, s = 0;
  cin >> n;
  int m[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> m[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (i == j || i == (n - 1) / 2 || j == (n - 1) / 2 || j + 1 == n - i)
        s += m[i][j];

  cout << s;
}
