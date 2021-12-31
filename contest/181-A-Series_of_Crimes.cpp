#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, c, maxIndex, minIndex, rCity = 0;

  cin >> n >> m;
  string a[n];
  
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    c = count(a[i].begin(), a[i].end(), '*');
    if (c > 0)
    {
      if (c > rCity)
      {
        if (rCity > 0)
          minIndex = maxIndex;
        rCity = c;
        maxIndex = i;
      }
      else if (c < rCity && c > 0)
      {
        minIndex = i;
      }
    }
  }
  // Testing
  // for (int i = 0; i<n; i++){
  //     cout<<"a["<<i<<"]- "<<a[i]<<endl;
  // }

  // cout<<"max- "<<maxIndex<<endl;
  // cout<<"min- "<<minIndex<<endl;

  for (int i = 0; i < m; i++)
  {
    if (a[maxIndex][i] != a[minIndex][i])
    {
      cout << minIndex << " " << i << endl;
      break;
    }
  }

  return 0;
}