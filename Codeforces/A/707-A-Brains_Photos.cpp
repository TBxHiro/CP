// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n, m;
  char c;
  bool found = false;

  cin >> n >> m;

  for (int i = 0; i < n * m; i++)
  {
    cin >> c;
    if (!found)
      found = (c == 'C' || c == 'M' || c == 'Y' ? true : false);
  }
  cout << (found ? "#Color" : "#Black&White");
}