#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int n, d;
    cin >> n >> d;

    long long int inf = d < 11 ? pow(2, d) : 1024 * pow(3, (d < 21 ? d - 10 : 11));
    cout << (inf < n ? inf : n) << endl;
  }
}