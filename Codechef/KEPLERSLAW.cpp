#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    double t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;
    cout << ((t1 * t1) / (r1 * r1 * r1) == (t2 * t2) / (r2 * r2 * r2) ? "Yes" : "No") << endl;
  }
}