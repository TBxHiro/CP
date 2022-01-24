#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b, y = 0;
  cin >> n;
  int r[n - 1];

  for (int i = 0; i < n - 1; i++)
    cin >> r[i];
  cin >> a >> b;

  while (a < b && ++a)
    y += r[a - 2];

  cout << y;
}