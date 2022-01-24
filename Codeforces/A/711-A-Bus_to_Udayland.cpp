// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();

  int n;
  string s, o;
  bool found = false;

  cin >> n;
  while (n--)
  {
    cin >> s;
    if (!found && s[0] == 'O' && s[1] == 'O')
    {
      found = true;
      s[0] = s[1] = '+';
      // o += "++" + s.substr(2) + "\n";
    }
    else if (!found && s[3] == 'O' && s[4] == 'O')
    {
      found = true;
      s[3] = s[4] = '+';
      // o += s.substr(0, 3) + "++\n";
    }
    // else
    o += s + "\n";
  }

  cout << (found ? "YES\n" + o : "NO\n");
}