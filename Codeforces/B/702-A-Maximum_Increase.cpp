#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n, c, max = 0, count = 0, p = 0;
  cin >> n;
  while (n--)
  {
    cin >> c;
    if (c > p)
    {
      count++;
      if (count > max)
        max = count;
    }
    else
      count = 1;
    p = c;
  }
  cout << max;
}