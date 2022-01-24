#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;

  getline(cin, s);
  int l = s.length() - 1;

  while (l--)
  {
    if (s[l] != '?' && s[l] != ' ')
    {
      char last = tolower(s[l]);
      if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' || last == 'y')
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
      return 0;
    }
  }
}