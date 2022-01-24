// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int diff(char a, char b)
{
  // char f[] = {a}, l[] = {b};
  //  string f(1, a), l(1, b);

  // return (abs(strcmp(f, l)));
  //  return (min(abs(a - b), abs(b - a)));
  return (a - '0' > b - '0' ? min(a - b, 26 - (a - b)) : min(b - a, 26 - (b - a)));
}

int main()
{
  fastread();
  string s;
  cin >> s;

  int sum = diff(s[0], 'a');

  for (int i = 1; i < s.length(); i++)
    sum += diff(s[i], s[i - 1]);

  cout << sum;
}