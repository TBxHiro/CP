#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, d, count = 0;
  cin >> n >> d;
  int h[n];

  for (int i = 0; i < n; i++)
    cin >> h[i];
    
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      if (max(h[i], h[j]) - min(h[i], h[j]) <= d)
        count++;
    }
  cout << count;
}