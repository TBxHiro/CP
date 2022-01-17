// Time Limit Exceeds

#include <bits/stdc++.h>
using namespace std;

int findocc(int x, int k, int a[], int n)
{
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
      count++;

    if (count == k)
      return (i + 1);
  }
  return -1;
}

int main()
{
  int n, q;
  cin >> n >> q;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  while (q--)
  {
    int x, k;
    cin >> x >> k;
    cout << findocc(x, k, a, n) << endl;
  }
}