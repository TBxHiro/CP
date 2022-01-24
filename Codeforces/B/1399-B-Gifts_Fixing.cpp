// 78 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, minA, minB;
    long long count = 0;
    cin >> n;
    int a[n], b[n];

    cin >> a[0];
    minA = a[0];
    for (int i = 1; i < n; i++)
    {
      cin >> a[i];
      if (a[i] < minA)
        minA = a[i];
    }

    cin >> b[0];
    minB = b[0];
    for (int i = 1; i < n; i++)
    {
      cin >> b[i];
      if (b[i] < minB)
        minB = b[i];
    }
    for (int i = 0; i < n; i++)
    {
      while (1)
      {
        int dA = a[i] - minA, dB = b[i] - minB;
        if (a[i] > minA && b[i] > minB)
        {
          dA = dA < dB ? dA : dB;
          a[i] -= dA;
          b[i] -= dA;
          count += dA;
        }
        else if (a[i] > minA)
        {
          a[i] -= dA;
          count += dA;
        }
        else if (b[i] > minB)
        {
          b[i] -= dB;
          count += dB;
        }
        else
          break;
      }
    }
    cout << count << endl;
  }
}