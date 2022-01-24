#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, min = 1001;
    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++)
      cin >> s[i];

    sort(s, s + n);

    for (int i = 0; i < n - 1; i++)
    {
      if (s[i + 1] - s[i] < min)
        min = s[i + 1] - s[i];

      if (min == 0)
        break;
    }
    cout << min << endl;
  }
}