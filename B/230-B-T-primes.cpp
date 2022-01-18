#include <bits/stdc++.h>
using namespace std;

bool isprime(string s, int n)
{
  // 1. If the last digit of the number is 0,2,4,5,6,8 then the number is not a prime.
  int ldt[6] = {0, 2, 4, 5, 6, 8};
  for (int i = 0; i < 6; i++)
    if (ldt[i] == s[n - 1] - '0')
      return false;

  // 2. If the digit ratio (sum of the digits of the number) is either 3,6 or 9 then the number is not a prime.
  set<int> dratio;

  for (int i = 0; i < n; i++)
    dratio.insert(s[i] - '0');

  if (dratio.size() == 3 || dratio.size() == 6 || dratio.size() == 9)
    return false;

  // 3. Subtract the sum of the even digits from the sum of the odd digits. If the result divisible by 11 then the number is not a prime.
}

// https://github.com/Shah-Shishir/Codeforces-Solutions/blob/master/230B.%20T-primes.cpp

const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
  int i, j;
  prime[0] = prime[1] = true;

  for (i = 4; i < MAX; i += 2)
    prime[i] = true;

  for (i = 3; i * i <= MAX; i += 2)
    if (!prime[i])
      for (j = i * i; j < MAX; j += 2 * i)
        prime[j] = true;
}

int main(void)
{
  sieve();

  int tc;
  long long n, r;

  cin >> tc;

  while (tc--)
  {
    cin >> n;

    r = sqrt(n);

    if (!prime[r] && r * r == n)
      cout << ("YES\n");
    else
      cout << ("NO\n");
  }

  return 0;
}