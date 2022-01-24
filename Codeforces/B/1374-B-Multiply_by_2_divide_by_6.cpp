#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int t;
  cin >> t;
  while (t--)
  {
    int n, count = 0;
    cin >> n;

    while (1)
    {
      if (n <= 1)
      {
        cout << (n == 1 ? count : -1) << endl;
        break;
      }

      if (n % 6 == 0)
      {
        n /= 6;
        count++;
      }
      else
      {
        n *= 2;
        count++;
      }
    }
  }
}