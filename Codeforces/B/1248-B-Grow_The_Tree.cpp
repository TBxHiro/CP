#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  long long x = 0, y = 0;
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);

  for (int i = 1; i <= n / 2; i++)
  {
    y += a[i - 1];
    x += a[n - i];
  }
  if (n % 2 != 0)
    x += a[n / 2];

  cout << y * y + x * x << "\n";
}