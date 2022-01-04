#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b, c, count = 0;
    string s, right;
    bool br = true, ache0 = false;
    int fa = 0, fb = 0, fc = 0;

    cin >> n >> a >> b >> c >> s;

    while (br)
    {
      for (int i = 0; i < n - 1; i++)
      {
        if (s[i] == '0' && s[i + 1] == '0' && ache0 && fa == 0)
        {
          s = s.substr(0, i + 1) + s.substr(i + 2);
          cout << "z- " << s << endl;
          n = s.length();
          count += a;
          fa = 2;
          fb = fc = 0;
          ache0 = true;
          break;
        }

        if (s[i] == '1' && s[i + 1] == '1' && ache0 && fb == 0)
        {
          s = s.substr(0, i + 1) + s.substr(i + 2);
          cout << "On-" << s << endl;
          n = s.length();
          count += b;
          fb = 2;
          fa = fc = 0;
          break;
        }
        else if (s[i] == '1' && s[i + 2] == '1' && c < b && ache0 && fc == 0)
        {
          s = s.substr(0, i + 1) + s.substr(i + 2);
          cout << "only-" << s << endl;

          n = s.length();
          count -= c;
          fc = 2;
          fa = fb = 0;
          break;
        }
        else if (i == n - 2)
          br = false;
      }

      if (!ache0)
        ache0 = true;
      // fa = fa > 0 ? fa - 1 : fa;
      // fb = fb > 0 ? fb - 1 : fb;
      // fc = fc > 0 ? fc - 1 : fc;
    }
    cout << "res- " << count << " " << s << endl;
  }
}