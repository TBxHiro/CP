
#include <iostream>

using namespace std;

int main()
{
  // 129921
  int sum = 18;
  string s = "129921";
  sum = (s[2] - '0') + (s[2 + 1] - '0');

  cout << "string- " + s.substr(0, 2) +to_string(sum)  + s.substr(4);

  return 0;
}
