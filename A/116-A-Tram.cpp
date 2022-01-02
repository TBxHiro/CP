//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, o, i, count = 0, max = 0;
  cin >> n;
  while (n--)
  {
    cin >> o >> i;
    count -= o;
    count += i;
    if (count > max)
      max = count;
  }
  cout << max;
}