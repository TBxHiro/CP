#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x, count = 0, fd = 0;
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);

    while (n--)
    {
      count += a[n];
      fd++;
      if (count >= x)
      {
        cout << fd << endl;
        break;
      }
    }
    if (count < x)
      cout << -1 << endl;
  }
}