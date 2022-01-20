// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int t;
  cin >> t;
  while (t--)
  {
    int s;
    cin >> s;
    cout << fixed << setprecision(0) << floor(s / 0.9) << endl;
  }
}