#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int z, y, a, b, c;
    cin >> z >> y >> a >> b >> c;

    cout << ((z - y - a - b - c) >= 0 ? "YES" : "NO") << endl;
  }
}