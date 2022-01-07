#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  for (int m = 0; m < 10 * 10 * 10; ++m)
  {
    int t = (n * m) + 1;
    bool notprime = false;

    for (int i = 1; i < t; ++i)
    {
      if (t % i == 0)
      {
        notprime = true;
        break;
      }
    }
    i
  }
}