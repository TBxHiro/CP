#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string s;

  cin >> t;
  while (t--)
  {
    int n, b = 0, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 != i % 2)
      {
        b++;
      }
      else
        c++;
    }

    cout << "b-" << b << " c-" << c << endl;

    if (b > 0)
    {
      if ((b + c) == 0)
      {
        if (b == 1)
        {
          s += "-1\n";
          cout << -1 << endl;
        }
        else
        {
          s += b / 2 + "\n";
          cout << b / 2 << endl;
        }
      }
      else
      {
        s += "-1\n";
        cout << -1 << endl;
      }
    }
    else
    {
      s += "0\n";
      cout << 0 << endl;
    }

    // cout << (b > 0 ? (b + c) == 0 ? b == 1 ? -1 : b / 2 : (b + c)
    //                : 0)
    //      << endl;
  }
  cout << s;
}