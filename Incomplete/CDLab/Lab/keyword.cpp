// check if user input is a keyword

#include <iostream>
using namespace std;
int main()
{
  string s[] = {"auto", "extern", "short", "while", "break", "float",
                "signed", "_Alignas", "case", "for", "sizeof",
                "_Alignof", "char", "goto", "static", "_Atomic",
                "const", "if", "struct", "_Bool", "continue",
                "inline", "switch", "_Complex", "default",
                "int", "typedef", "_Generic", "do", "long",
                "union", "_Imaginary", "double", "register",
                "unsigned", "_Noreturn", "else", "restrict",
                "void", "_Static_assert", "enum", "return",
                "volatile", "_Thread_local", "_all", "_b",
                "byte", "_coef", "_cons", "double", "new",
                "in", "_n", "_pi", "_pred", "_rc",
                "_skip", "strl", "using", "with"};

  int n = sizeof(s) / sizeof(s[0]);
  string k;
  cin >> k;
  for (int i = 0; i < n; i++)
    if (s[i] == k)
    {
      cout << k << " is a KEYWORD " << endl;
      return 0;
    }

  cout << k << " is NOT a KEYWORD" << endl;
}