// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int n, max = 0;
  cin >> n;
  while (n--)
  {
    int a, sum = 0;

    cin >> a;
    sum = max + a;

    if (sum > max)
      max = sum;

    cout << sum << " ";
  }
}