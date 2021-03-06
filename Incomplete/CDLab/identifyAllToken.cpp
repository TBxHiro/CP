#include <iostream>
#include <fstream>
using namespace std;

string dataypes[] = {"int", "bool", "char", "string"};
string keywords[] = {"int", "double", "float", "string", "main", "break", "char",
                     "const", "else", "if", "for", "delete", "new", "namespace", "inlcude", "true",
                     "false", "bool", "using", "fstream", "iostream", "std", "ifstream", "return"};
char choperators[] = {'=', '+', '-', '*', '/', '<', '>', '!'};

bool checkkey(string s)
{
    for (int i = 0; i < 23; i++)
    {
        if (s == keywords[i])
            return true;
    }
    return false;
}

bool checkoperator(char c)
{
    for (int i = 0; i < 8; i++)
    {
        if (c == choperators[i])
            return true;
    }
    return false;
}

int main()
{
    string line;
    ifstream file("program.txt");

    while (getline(file, line))
    {
        int i = -1;
        string token = "";

        while (i++ != line.length() - 1)
        {
            if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
            {
                token += line[i];
            }
            else if (token == "" && checkoperator(line[i]))
            {
                if (checkoperator(line[i + 1]))
                {
                    cout << line[i] << line[i + 1] << " - Operator" << endl;
                    token = "";
                    i++;
                }
                else
                {
                    cout << line[i] << " - Operator" << endl;
                    token = "";
                }
            }
            else if (token != "")
            {
                if (checkkey(token))
                {
                    cout << token << " - Keyword" << endl;
                    token = "";
                }
                else
                {
                    cout << token << " - Identifier" << endl;
                    token = "";
                }
            }
        }
    }

    file.close();
    return 0;
}