#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int sloth, dragon;
    int a, b, c, d, e, f, g;

    cin >> a >> b >> c >> d >> e >> f;
    dragon = a + b + c;
    sloth = d + e + f;

    cout << (sloth > dragon   ? "SLOTH"
             : sloth < dragon ? "DRAGON"
             : a > d          ? "DRAGON"
             : a < d          ? "SLOTH"
             : b > e          ? "DRAGON"
             : b < e          ? "SLOTH"
             : c > f          ? "DRAGON"
             : c < f          ? "SLOTH"
                              : "TIE")
         << endl;
  }
}