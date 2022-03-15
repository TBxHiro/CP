// swap values

#include <iostream>
using namespace std;

void Cswap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int x, y;
  cin >> x >> y;
  Cswap(x, y);

  cout << "x-" << x << ", y-" << y << endl;
}