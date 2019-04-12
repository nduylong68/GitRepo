
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
    cout << &a.x << endl << &a.y << endl << &a << endl;
}


int main()
{
    Point test;
    Address(test);
    return 0;
}
// Địa chỉ của chính biến kiểu point (test) giống với địa chỉ của trường được khai báo đầu tiên (text.x)
// Địa chỉ của trường x và trường y cách nhau 4 bit ( so bit để lưu trữ biến kiểu int) => ô nhớ ngay sát nhau.
