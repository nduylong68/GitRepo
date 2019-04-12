#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
    void get(int x_, int y_)
    {
        x = x_;
        y  = y_;
    }
};

void print(Point a)
{
    cout << "(" << a.x << ";" << a.y << ")" << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    Point test;
    test.get(a, b);
    print(test);
    return 0;
}
