#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, count = 0;
    cin >> n >> m;
    string s[n];

    for (int i = 0; i < n; i++)
      cin >> s[i];

    for (int i = 0; i < n; i++)
    {
      if (i == n - 1)
      {
        for (int j = 0; j < m - 1; j++)
          if (s[i][j] != 'R')
            count++;
      }
      else if (s[i][m - 1] != 'D')
        count++;
    }
    cout << count << endl;
  }
}