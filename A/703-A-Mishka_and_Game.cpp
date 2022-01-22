// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n, count = 0;
  cin >> n;

  while (n--)
  {
    int m, c;
    cin >> m >> c;
    count += (m > c ? 1 : m < c ? -1
                                : 0);
  }

  cout << (count > 0   ? "Mishka"
           : count < 0 ? "Chris"
                       : "Friendship is magic!^^");
}