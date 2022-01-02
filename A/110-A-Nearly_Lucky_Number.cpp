//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  int count = 0;
  cin >> n;

  for (int i = 0; i < n.length(); i++)
    if (n[i] == '7' || n[i] == '4')
      count++;
  if (count == 7 || count == 4)
    cout << "YES";
  else
    cout << "NO";
}