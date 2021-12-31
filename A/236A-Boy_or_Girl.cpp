#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, temp;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (temp.find(s[i]) > temp.length() || temp.find(s[i]) < 0)
      temp += s[i];
  }
  if (temp.length() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
  return 0;
}