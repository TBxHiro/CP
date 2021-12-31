//15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, t;
    bool flag = false;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
      if (a[i + 1] - a[i] > 1)
      {
        flag = true;
        break;
      }
    }

    if (flag)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}