#include <bits/stdc++.h>
using namespace std;
int main()
{
  int k2, k3, k5, k6, sum = 0;
  cin >> k2 >> k3 >> k5 >> k6;
  while (1)
  {
    if (k2 > 0 && k5 > 0 && k6 > 0)
    {
      sum += 256;
      k2 -= 1;
      k5 -= 1;
      k6 -= 1;
    }
    else if (k3 > 0 && k2 > 0)
    {
      sum += 32;
      k2 -= 1;
      k3 -= 1;
    }
    else
      break;
  }
  cout << sum;
}