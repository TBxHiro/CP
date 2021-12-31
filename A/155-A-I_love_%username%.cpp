//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t, max, min, count = 0;
  cin >> n;
  cin >> min;

  max = min;
  n--;

  while (n--)
  {
    cin >> t;
    if (t < min)
    {
      min = t;
      count++;
    }
    else if (t > max)
    {
      max = t;
      count++;
    }
  }

  cout << count;
}