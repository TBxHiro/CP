//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, count = 0;
  cin >> n >> m;

  for (int i = 0; i < 1001; i++)
  {
    for (int j = 0; j < 1001; j++)
    {
      if ((i * i + j > n) || (i + j * j > m))
        break;

      if ((i * i) + j == n && i + (j * j) == m)
        count++;
    }
  }

  cout << count;
}