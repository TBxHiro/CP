#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b, i = 0;
    cin >> n >> a >> b;

    string dc, s;
    for (int i = 0; i < b; i++)
      dc += char('a' + i);

    while (++i)
    {
      s += dc[i - 1];

      if (s.length() == n)
        break;

      if (i == dc.length())
        i = 0;
    }

    cout << s << endl;
  }
}