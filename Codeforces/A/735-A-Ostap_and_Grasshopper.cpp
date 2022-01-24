// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int n, k;
  string s;

  cin >> n >> k >> s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'T' || s[i] == 'G')
    {
      for (int j = i + k; j < n; j += k)
      {
        if (s[j] == '#')
        {
          cout << "NO"
               << "\n";
          return 0;
        }

        if (s[j] == 'T' || s[j] == 'G')
        {
          cout << "YES"
               << "\n";
          return 0;
        }
      }
      cout << "NO"
           << "\n";
      break;
    }
  }
}