#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  double x[n], y[n], max = 0;

  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  for (int i = 0; i < n - 1; i++)
  {
    // cout << "I-" << i + 1 << endl;
    for (int j = 1; j < n; j++)
    {
      double d = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
      if (d > max)
        max = d;
    }
  }

  cout << fixed << setprecision(10) << max << endl;
}