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

void With_refer(Point& a)
{
    cout << &a << endl;
}

void Without_refer(Point b)
{
    cout << &b << endl;
}

int main()
{
    Point test;
    With_refer(test);
    Without_refer(test);
    return 0;
}

// Sau khi chạy chương trinh sẽ thấy in ra hai địa chỉ khác nhau.
