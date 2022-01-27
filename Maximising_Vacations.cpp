#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

bool one(string s, int n)
{
  // cout << "in=" << s << endl;
  f(i, n) if (s[i] == '1')
  {
    if (s.substr(i + 1).find('1') != string::npos)
      return true;
    else
      return false;
  }
  return true;
}

void solve()
{
  int n, x, count = 0;
  string s;
  cin >> n >> x >> s;

  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }

wh:
  while (1)
  {
    for (int i = 0; i < n - x + 1; i++)
    {
      // if (s[i] == '0' && s[i + 1] == '0')
      if (stoi(s.substr(i, x)) == 0)
      {
        count++;
        s = s.substr(0, i) + s.substr(i + x);
        // cout << s << " ";
        n = s.length();
        goto wh;
      }
    }

    for (int i = 0; i < n - x + 1; i++)
    {
      // cout << "n";
      if (!one(s.substr(i, x), x))
      {
        count++;
        s = s.substr(0, i) + s.substr(i + x);
        // cout << s << " ";
        n = s.length();
        break;
      }
    }
    break;
  }
  // cout << endl;
  cout << count << endl; //<< " n=" << n << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}