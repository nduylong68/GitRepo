
#include<iostream>
#include<cmath>

using namespace std;

int main()
{

  int x, y;
  bool b = false;
  cin >> x >> y ;
  if ( (x%7 == 0) && (y%7 == 0) )
  {
      cout << "true" << endl;
  }
  else
  {
      cout << "false" << endl;
  }
  return 0;
}
