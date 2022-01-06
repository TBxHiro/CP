#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, count = 0;
    cin >> n >> m;
    vector<int> w;

    for (int i = 2; i <= m; ++i) // loop to check for each number in the range
    {
      bool prime = false; // to maintain factor count

      for (int j = 2; j * j <= i; ++j) // checking for factors
        if (i % j == 0)
          prime = true; // increasing factor count when found

      if (prime && m % i == 0)
      {
        auto it = find(w.begin(), w.end(), m / i);
        if (it == w.end())
        {
          cout << m / i << " ";
          count++;
          w.push_back(m / i);
        }
      }
    }
    cout << "R-" << t << " - " << count << endl;
  }
}