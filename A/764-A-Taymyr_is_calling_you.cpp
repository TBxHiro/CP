#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, z, lcm;
  cin >> n >> m >> z;

  lcm = (n * m) / __gcd(n, m);
  cout << (z / lcm <= z ? z / lcm : z);
}