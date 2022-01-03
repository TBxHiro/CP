#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  int count = 0;
  cin >> a;

  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] < 'a')
      count += 1;
    else
      count -= 1;
  }

  if (count > 0)
    transform(a.begin(), a.end(), a.begin(), ::toupper);
  else
    transform(a.begin(), a.end(), a.begin(), ::tolower);

  cout << a;
}