#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t, maxI, seq;
  string s;
  bool found = false;

  cin >> n;
  while (n--)
  {
    cin >> s;
    seq = 0;
    for (int i = 0; i < s.length(); i++)
    {
      t = 0;
      if (s[i] == '1')
      {
        found = true;
        t++;
        while (i < s.length() - 1 && s[i + 1] == '1')
        {
          t++;
          i++;
        }

        if (t > seq)
        {
          seq = t;
          maxI = i - t + 1;
        }
      }
    }
    if (!found)
      cout << 0 << endl;
    else
      cout << seq << " " << maxI << endl;
  }
}