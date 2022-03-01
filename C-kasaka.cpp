#include <bits/stdc++.h>
using namespace std;

bool pal(string s, int n)
{
  for (int i = 0; i < n / 2; i++)
    if (s[i] != s[n - i - 1])
      return false;
  return true;
}

int main()
{
  int s;
  cin >> s;

  while (!pal)

    return 0;
}