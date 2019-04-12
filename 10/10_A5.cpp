
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

void Address(Point& a)
{
    cout << &a << endl << &a.x << endl << &a.y << endl ;
}


int main()
{
    Point test;
    Point arr[3];
    arr[1] = test;
    Address(test);
    Address(arr[1]);
    return 0;
}

// Địa chỉ của các trường của biến kiểu mảng khi sao chép với biến là một struct khác so với địa chỉ của các trường của biến kiểu struct được sao chép
