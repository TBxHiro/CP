//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n], b[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
  {
    b[a[i] - 1] = i + 1;
  }

  for (int i = 0; i < n; i++)
    cout << b[i] << " ";
}