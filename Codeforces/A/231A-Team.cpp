//30 ms	0 KB
#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1)
            s++;
    }
    cout << s << endl;
    return 0;
}