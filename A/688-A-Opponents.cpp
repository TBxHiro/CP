// Bismillahir Rahmanir Rahim
// Read the name of Allah, who created you!

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define all(a) a.begin(), a.end()
#define endl "\n"
using namespace std;

void solve()
{
  int n, d, count = 0, max = 0;
  cin >> n >> d;

  f(i, d)
  {
    string s;
    cin >> s;

    if (s.find('0') != s.npos)
    {
      count++;
      if (count > max)
        max = count;
    }
    else
      count = 0;
  }
  cout << max << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--)
    solve();

  return 0;
}