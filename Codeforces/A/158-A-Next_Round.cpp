//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, t, s = 0;
  cin >> n >> k;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> t;
    a[i] = t;
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0 && a[i] >= a[k - 1])
      s++;
    else
      break;
  }

  cout << s;
}