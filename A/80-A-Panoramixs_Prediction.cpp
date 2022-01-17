#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  while (n < m)
  {
    bool nonprime = false;
    ++n;

    for (int i = 2; i * i <= n; ++i)
      if (n % i == 0)
        nonprime = true;

    if (!nonprime)
    {
      if (n == m)
        cout << "YES";
      else
        cout << "NO";
      return 0;
    }
  }
  cout << "NO";
}