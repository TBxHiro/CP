#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, prev = -1;
  cin >> n;

  while (n--)
  {
    int now;
    cin >> now;

    if (now > prev)
      prev = now;
    else
    {
      cout << prev << endl;
      return 0;
    }
  }
  cout << prev << endl;
}