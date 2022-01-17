#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  for (int m = 1; m < 10 * 10 * 10; ++m)
  {
    int t = (n * m) + 1;
    bool notprime = false;
    //cout << "m- " << m << endl;
    for (int i = 2; i < t; i++)
    {
      if (t % i == 0)
      {
        notprime = true;
        //cout << "i- " << i << "; m- " << m << endl;
        break;
      }
    }
    if (notprime)
    {
      cout << m;
      break;
    }
  }
}