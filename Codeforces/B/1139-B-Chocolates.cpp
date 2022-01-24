#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  long long int count, last;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  last = count = a[n - 1];

  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] == 0)
      break;

    if (a[i] >= last && last != 1)
      count += --last;
    else if (a[i] < last && last != 1)
    {
      count += a[i];
      last = a[i];
    }
    else
      break;
  }
  cout << count << endl;
}