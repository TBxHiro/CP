#include <bits/stdc++.h>
using namespace std;

bool tprime(long int x)
{
  int count = 0;
  for (long int i = 2; i <= x / 2; i++)
  {

    if (x % i == 0)
      count++;
    if (count > 1)
      return false;
  }

  if (count == 1)
    return true;
  else
    return false;
}

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    long int t;
    cin >> t;
    cout << (tprime(t) ? "YES" : "NO") << endl;
  }
}