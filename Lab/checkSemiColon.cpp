#include <iostream>
using namespace std;

int main()
{
  string s;
  getline(cin, s);

  // cout << (s.back() != ';' ? "Syntax Error: ; missing!" : "No syntax error.");

  cout << (s[s.length() - 1] != ';' ? "Syntax Error: ; missing!" : "No syntax error.");
}