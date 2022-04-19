// If parenthesis is in right format
#include <iostream>
using namespace std;

int main()
{
  string s = "(a+b+c)";
  int count = 0;

  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i], p = (i == 0 ? ' ' : s[i - 1]);

    if (c == '(')
      count++;
    else if (c == ')' && (i == 0 || p == '+' || p == '-' || p == '*' || p == '/'))
    {
      cout << "Invalid Format1" << endl;
      return 0;
    }
    else if (c == ')')
      count--;
  }

  if (count == 0)
    cout << "Valid Format";
  else
    cout << "Invalid Format2";
}
