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
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (max(a1, b1) == max(a2, b2) && min(a1, b1) + min(a2, b2) == max(a1, b1))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;

    // if (a1 > b1)
    //   swap(a1, b1);
    // if (a2 > b2)
    //   swap(a2, b2);

    // if (a1 + a2 == b1 && b2 == b1)
    //   cout << "YES\n";
    // else
    //   cout << "NO\n";
  }
}