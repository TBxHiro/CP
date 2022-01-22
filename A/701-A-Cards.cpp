// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int n;
  cin >> n;

  pair<int, int> b[n];

  for (int i = 0; i < n; i++)
    cin >> b[i].first, b[i].second = i + 1;

  sort(b, b + n);

  for (int i = 0; i < n / 2; i++)
    cout << b[i].second << " " << b[n - i - 1].second << endl;

  // int sum = 0, a[n];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> a[i];
  //   sum += a[i];
  // }

  // sum /= (n / 2);

  // for (int i = 0; i < n; i++)
  // {
  //   if (a[i] == 0)
  //     continue;
  //   cout << i + 1 << " ";

  //   for (int j = 0; j < n; j++)
  //   {
  //     if (j == i || a[j] == 0)
  //       continue;

  //     if (a[i] + a[j] == sum)
  //     {
  //       cout << j + 1 << " \n";
  //       a[i] = 0;
  //       a[j] = 0;
  //       break;
  //     }
  //   }
  // }
}