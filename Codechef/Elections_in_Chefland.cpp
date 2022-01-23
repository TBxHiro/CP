#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (max({a, b, c}) <= 50)
      cout << "NOTA" << endl;
    else
      cout << (a > b && a > c   ? "A"
               : b > a && b > c ? "B"
               : c > a && c > b ? "C"
                                : "NOTA")
           << endl;
  }
}