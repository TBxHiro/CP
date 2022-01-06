#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, y;
    cin >> n >> x >> y;

    int cx = (n + 1) / 2, cy = (n + 1) / 2;

    if ((x % 2 != 0 && y % 2 != 0) || (x % 2 == 0 && y % 2 == 0))
      cout << 0 << endl;
    else
      cout << 1 << endl;
  }
}