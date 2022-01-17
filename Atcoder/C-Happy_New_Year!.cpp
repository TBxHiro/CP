#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  string s;
  cin >> n;

  vector<int> b;

  int i = 0;
  while (n > 0)
  {
    if (n % 2 == 0)
      b.push_back(0);
    else
      b.push_back(2);
    n = n / 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--)
    s += to_string(b.at(j));

  cout << s << endl;
}