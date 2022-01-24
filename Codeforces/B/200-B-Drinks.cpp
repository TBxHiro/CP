#include <bits/stdc++.h>
using namespace std;

int main()
{
  double v = 0;
  int n, p;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> p;
    v += p;
  }
  cout << fixed << setprecision(10) << v / n;
}