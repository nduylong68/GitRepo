#include<iostream>
#include<cmath>

using namespace std;

int main()
{

  int x1, y1,x2, y2;
  float result;
  cin >> x1 >> y1 >> x2 >> y2;
  result = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
  cout << result << endl;
  return 0;
}


