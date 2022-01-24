#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  // string s;
  cin >> t;
  while (t--)
  {
    int n, even = 0, moves = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
        even++;
      else
        even--;

      if (a[i] % 2 != i % 2)
        moves++;
    }

    if ((n % 2 == 0 && even == 0) || (n % 2 != 0 && even == 1))
    {
      cout << moves / 2 << endl;
      // s += to_string(moves / 2) + "\n";
    }
    else
      cout << -1 << endl;
    // s += "-1\n";
  }
  // cout << s;
}