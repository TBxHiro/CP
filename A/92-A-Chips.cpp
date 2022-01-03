// 30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, i = 0;
  cin >> n >> m;

  // 30 ms	4 KB
  // temp = (n * (n + 1) / 2);
  int temp = m % (n * (n + 1) / 2);

  while (++i && i <= n)
  {
    if (i > temp)
    {
      cout << temp;
      break;
    }
    temp -= i;
  }

  // 30 ms	4 KB
  //  int temp =1;
  //   while (++i)
  //   {
  //     m -= i;
  //     // cout << "temp- " << temp++ << " i- " << i << " m- " << m << endl;

  //   if (m == 0)
  //   {
  //     cout << 0;
  //     return 0;
  //   }
  //   else if (i == n) i = 0;
  //   else if (i > m)
  //   {
  //     if (m == -1) cout << i + m;
  //     else cout << m;
  //     return 0;
  //   }
  // }

  // 30 ms	8 KB
  // int temp = 0;
  // while (++i && i <= n)
  //   temp += i;

  // temp = m % temp;
  // i = 0;

  // while (++i && i <= n)
  // {
  //   if (i > temp)
  //   {
  //     cout << temp;
  //     break;
  //   }
  //   temp -= i;
  // }
}