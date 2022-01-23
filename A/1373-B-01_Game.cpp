#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    bool win = false;
    cin >> s;

    while (1)
    {
      bool found = false;
      for (int i = 0; i < s.length() - 1; i++)
      {
        if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
        {
          found = true;
          win = (win ? false : true);
          s = s.substr(0, i) + s.substr(i + 2);
          break;
        }
      }
      if (!found || s.length() == 0)
      {
        cout << (win ? "DA" : "NET") << endl;
        break;
      }
    }
  }
}
