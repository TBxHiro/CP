// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int k, r;
  cin >> k >> r;

  for (int i = 1;; i++)
  {
    int p = k * i;

    if (p % 10 == 0 || p % 10 == r)
    {
      cout << i;
      break;
    }
  }

  // int d = k % 10, b = 10, wb = 11
  //  for (int i = 1; i < 10; i++)
  //  {
  //    if ((d * i - r) % 10 == 0)
  //    {
  //      b = i;
  //      break;
  //    }
  //  }

  // for (int i = 1; i < 10; i++)
  // {
  //   if (d * i % 10 == 0)
  //   {
  //     wb = i;
  //     break;
  //   }
  // }

  // cout << (d == 0   ? 1
  //          : d == 5 ? r == 5 ? 1 : 2
  //                   : min(b, wb));
}