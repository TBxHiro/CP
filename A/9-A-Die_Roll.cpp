#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, d;
  string p[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
  cin >> a >> b;

  cout << p[max(a, b) - 1];

  // d = max(a, b);
  // if (d == 1)
  //   cout << "1/1";
  // else if (d == 6)
  //   cout << "1/6";
  // else if (d == 5)
  //   cout << "1/3";
  // else if (d == 4)
  //   cout << "1/2";
  // else if (d == 3)
  //   cout << "2/3";
  // else if (d == 2)
  //   cout << "5/6";
}