#include <bits/stdc++.h>
using namespace std;

bool isPrime(long int n)
{
  for (int i = 2; i <= n; ++i)
  {
    bool ctr = false;
    for (int j = 2; j * j <= i; ++j)
    {
      if (i % j == 0)
        return false;
    }
  }
  return true;
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    string s;
    bool found = false;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++)
    {
      if (s[i] == '1')
      {
        if (s[i + 1] == '0' || s[i + 1] == '1')
        {
          cout << "Yes" << endl;
          found = true;
          break;
        }
        else
        {
          cout << "No" << endl;
          found = true;
          break;
        }
      }
    }

    if (!found)
      cout << "No" << endl;

    // for (int len = 2; len <= s.length(); len++)
    // {
    //   // Pick ending point
    //   for (int i = 0; i <= s.length() - len; i++)
    //   {
    //     if (s[i] == '0')
    //       continue;

    //     //  Print characters from current starting point to current ending point.
    //     int j = i + len - 1;
    //     string st;

    //     for (int k = i; k <= j; k++)
    //       st += s[k];

    //     if (isPrime(stoll(st, 0, 2)))
    //     {
    //       cout << "Yes" << endl;
    //       // found = true;
    //     }

    //     if (found)
    //       break;
    //     cout << st << " - " << stol(st, 0, 2) << endl;
    //   }

    //   if (found)
    //     break;
    // }
    // if (!found)
    //   cout << "No" << endl;

    // for (int i = 0; i < s.length(); i++)
    // {
    //   if (s[i] == '0')
    //     continue;
    //   for (int len = 2; len <= s.length() - i; len++)
    //   {
    //     cout << stoi(s.substr(i, len), 0, 2) << endl;
    //   }
    // }
  }
}