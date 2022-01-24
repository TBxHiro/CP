// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int n;
  string s;
  cin >> n >> s;

  int a = count(s.begin(), s.end(), 'A');
  int d = count(s.begin(), s.end(), 'D');
  cout << (a > d   ? "Anton"
           : a < d ? "Danik"
                   : "Friendship");
}