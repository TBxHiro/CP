#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i += 2)
      for (int j = 0; j < m; j += 2)
        count++;
    cout << count << endl;
  }
}