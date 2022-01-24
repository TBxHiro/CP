#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, length;
  string s;
  cin >> n;

  while (n--)
  {
    cin >> s;
    length = s.length();
    if (length > 10)
      s = s[0] + to_string(length - 2) + s[length - 1];

    cout << s << endl;
  }
}