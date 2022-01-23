#include <iostream>

using namespace std;

int main()
{
  int n, count = 0;
  cin >> n;

  int arr[n];
  int max1 = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];

    if (arr[i] > max1)
      max1 = arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != max1)
    {
      cout << arr[i] << " ";
      count++;
    }

    if (count == 0)
      cout << endl;
  }
}