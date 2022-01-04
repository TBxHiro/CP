#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;

    cin >> a >> b;
    string s[a][a];
    string board;

    // for (int i = 1; i <= b; i++)
    //   f += i;

    if (a + 1 >= b * 2)
    {
      for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
          s[i][j] = '.';

      for (int i = 0; i < a; i += 2)
      {
        if (b)
        {
          s[i][i] = 'R';
          b--;
        }
      }

      for (int i = 0; i < a; i++)
      {
        for (int j = 0; j < a; j++)
          board += s[i][j];
        if (i != a - 1)
          board += "\n";
      }

      cout << board << endl;
    }
    else
      cout << -1 << endl;
    ;
  }
}