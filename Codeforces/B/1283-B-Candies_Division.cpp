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
    int n, k;
    cin >> n >> k;

    int c = n - n % k;
    cout << (n % k == 0 ? n : c + k / 2 > n ? n
                                            : c + k / 2)
         << endl;
  }
}