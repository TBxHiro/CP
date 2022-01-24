// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  cout << a[2] - a[0];
}