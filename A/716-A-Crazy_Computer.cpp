// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n, c, count = 0;
  cin >> n >> c;
  int t, p;

  cin >> p;
  while (--n)
  {
    cin >> t;
    if (t - p <= c)
      count++;
    else
      count = 0;

    p = t;
  }

  cout << count + 1;
}