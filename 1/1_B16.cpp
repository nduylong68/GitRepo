#include<iostream>
#include<cmath>

using namespace std;

int main()
{

  int x, y,z;
  bool b = false;
  cin >> x >> y >> z;
  if (x == y && y == z)
  {
      b = true;
  }
  cout << b << endl;
  return 0;
}

