// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int k, c = 0;
  string s, o;
  cin >> k >> s;

  for (int i = 0; i < k; i++)
  {
    int b = 0;
    if (s[i] == 'B')
    {
      b++;
      c++;
      while (s[++i] == 'B')
        b++;
    }
    if (b > 0)
      o += to_string(b) + " ";
  }

  cout << (c == 0 ? to_string(c) : (to_string(c) + "\n" + o));
}