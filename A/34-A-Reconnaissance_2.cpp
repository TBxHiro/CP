#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, d, t, i1, i2;
  cin >> n;
  int h[n];

  for (int i = 0; i < n; i++)
    cin >> h[i];

  if (n == 2)
  {
    cout << 1 << " " << 2;
    return 0;
  }

  t = max(h[0], h[n - 1]) - min(h[0], h[n - 1]);
  i1 = n - 1;
  i2 = 0;

  for (int i = 0; i < n - 1; i++)
  {
    d = max(h[i], h[i + 1]) - min(h[i], h[i + 1]);
    cout << h[i] << " - " << h[i + 1] << " = " << d << endl;
    if (d < t)
    {
      t = d;
      i1 = i;
      i2 = i + 1;
    }
    if (t == 0)
      break;
  }
  cout << i1 + 1 << " " << i2 + 1 << endl;
}