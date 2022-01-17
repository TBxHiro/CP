// https://www.codechef.com/JAN221C/problems/RIFFLES
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    // string s;
    bool found = false;

    cin >> n >> k;
    int r = k;

    int P[n], j = 1, sl = 1;
    vector<int> store[n];

    for (int i = 0; i < n; i++)
    {
      P[i] = i + 1;
      store[0].push_back(i + 1);
    }

    while (k--)
    {
      j = 0;
      int temp[n / 2];
      string s;

      for (int i = 0; i < n / 2; i++)
      {
        P[i] = P[j++];
        temp[i] = P[j++];

        store[sl].push_back(P[i]);
      }

      for (int i = 0; i < n / 2; i++)
      {
        P[n / 2 + i] = temp[i];
        store[sl].push_back(temp[i]);
      }

      if (P[0] == 1 && P[1] == 2 && k > n)
      {
        k = r % (r - k);

        for (int i = 0; i < n; i++)
          cout << store[k].at(i) << " ";
        cout << endl;
        found = true;

        break;
      }

      sl++;
      // for (int i = 0; i < n; i++)
      //   cout << P[i] << " ";
      // // s += to_string(P[i]) + " ";
      // cout << endl;
    }

    if (!found)
    {
      for (int i = 0; i < n; i++)
        cout << P[i] << " ";
      // s += to_string(P[i]) + " ";
      cout << endl;
    }
  }
}