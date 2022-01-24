#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  int x = 0;

  for (int i = 0; i < 4 * n - 1; i++)
  {
    int y;
    cin >> y;
    x ^= y;
    cout << x << ' ';
  }
  return 0;
}