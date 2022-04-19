// check if user input is alphanumeric

#include <iostream>
using namespace std;
int main()
{
  string s;
  cin >> s;

  if (s[0] >= '0' && s[0] <= '9')
    cout << s << " is a NUMERIC" << endl;
  else
    cout << "NOT an NUMERIC" << endl;
}
