// https://atcoder.jp/contests/arc133/tasks/arc133_a

#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
  fastread();

  int n, prev = 0, last = 0;
  bool found = false;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] < prev && !found)
    {
      last = prev;
      found = true;
    }

    prev = a[i];
  }

  if (last == 0)
    last = a[n - 1];

  for (int i = 0; i < n; i++)
  {
    if (a[i] == last)
      continue;

    cout << a[i] << " ";
  }
  cout << endl;
}