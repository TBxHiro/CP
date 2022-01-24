//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int min = 101, max = 0, maxIndex, minIndex, n;
  cin >> n;
  int h[n];

  for (int j = 0; j < n; j++)
  {
    cin >> h[j];
    if (h[j] > max)
    {
      maxIndex = j;
      max = h[j];
    }
    if (h[j] <= min)
    {
      min = h[j];
      minIndex = j;
    }
  }

  cout << maxIndex + n - 1 - minIndex - (maxIndex > minIndex ? 1 : 0);
}