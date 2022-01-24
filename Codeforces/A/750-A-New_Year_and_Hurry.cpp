#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, m = 0, count = 0;
  cin >> n >> k;

  while (m <= 240 - k && count < n)
  {
    m += 5 * ++count;
    if (m > 240 - k)
      count--;
  }
  cout << count << endl;
}