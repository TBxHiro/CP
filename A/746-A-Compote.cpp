// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int a, b, c;
  cin >> a >> b >> c;

  int bm = b / 2, cm = c / 4;

  cout << min({a, bm, cm}) * 7 << endl;
}