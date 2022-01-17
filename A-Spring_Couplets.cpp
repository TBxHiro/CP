#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string a[n], b[n];
    bool rulebreak = false;

    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    if (a[n - 1].back() < '3' || b[n - 1].back() > '2')
    {
      cout << "NO" << endl;
      continue;
    }

    for (int i = 1; i < n; i++)
    {
      if ((a[i].back() < '3' && b[i].back() < '3') || (a[i].back() > '2' && b[i].back() > '2'))
      {
        rulebreak = true;
        break;
      }
    }
    cout << (rulebreak ? "NO" : "YES") << endl;
  }
}