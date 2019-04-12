#include <iostream>

using namespace std;

struct Point
{
    float x;
    float y;
    void get(float x_, float y_)
    {
        x = x_;
        y  = y_;
    }
};

void print(Point a)
{
    cout << "(" << a.x << ";" << a.y << ")" << endl;
}

Point mid_point(const Point a, const Point b)
{
    Point midpoint;
    midpoint.x = (a.x +b.x) / 2;
    midpoint.y = (a.y + b.y) / 2;
    return midpoint;
}

int main()
{
    float a, b, c , d;
    cin >> a >> b >> c >> d;
    Point M, N;
    M.get(a, b);
    N.get(c, d);
    Point P = mid_point(M, N);
    print(P);
    return 0;
}

