#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b, c, count = 0, lastOp = 0;
    string s, right;
    // int loop = 0;
    // bool twoone = true;

    cin >> n >> a >> b >> c >> s;

  re:
    while (1)
    {
      // cout << "loop- " << loop++ << endl;
      if (lastOp != 1)
      {
        for (int i = 0; i < n - 1; i++)
        {
          if (s[i] == '0' && s[i + 1] == '0')
          {
            // zerotwo = true;
            lastOp = 1;
            // cout << "zerotwo- " << s << endl;
            s = s.substr(0, i) + s.substr(i + 1);

            n = s.length();
            count += a;
            goto re;
          }
        }
      }

      // if (lastOp != 2)
      //{
      for (int i = 0; i < n - 1; i++)
      {
        if (s[i] == '1' && s[i + 1] == '1')
        {
          if (lastOp != 2)
          {
            lastOp = 2;
            // twoone = false;

            // cout << "twoone- " << s << endl;
            s = s.substr(0, i) + s.substr(i + 1);

            n = s.length();
            count += b;
            goto re;
          }
          // else
          // {
          //   twoone = true;
          //   break;
          // }
        }
      }

      if (lastOp != 3 && c < b)
      {
        for (int i = 0; i < n - 1; i++)
        {
          if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
          {
            lastOp = 3;
            // cout << "zero- " << s << endl;
            s = s.substr(0, i + 1) + s.substr(i + 2);

            n = s.length();
            count -= c;
            goto re;
          }
          else if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '1')
          {
            lastOp = 3;
            // cout << "zero- " << s << endl;
            s = s.substr(0, i) + s.substr(i + 1);

            n = s.length();
            count -= c;
            goto re;
          }
          else if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0')
          {
            lastOp = 3;
            // cout << "zero- " << s << endl;
            s = s.substr(0, i + 2) + s.substr(i + 3);

            n = s.length();
            count -= c;
            goto re;
          }
        }
      }

      break;
    }
    cout << count << endl;
    // cout << count << " " << s << endl;
  }
}