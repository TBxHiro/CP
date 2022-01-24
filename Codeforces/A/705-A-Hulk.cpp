// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      cout << "I hate ";
    else
      cout << "I love ";
    if (i != n)
      cout << "that ";
    else
      cout << "it";
  }
}