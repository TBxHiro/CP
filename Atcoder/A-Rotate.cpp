#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0';

  cout << (a * 111 + b * 111 + c * 111) << endl;
}