#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100; // p2 la mot con tro duoc gan bang con tro duoc cap phat bo nho dong . tuy nhien vung cap phat da duoc tra lai (dong tren)
    cout << *p2;
    delete p2; // p2 khong con tro vao vung bo nho duoc cap phat nua.

    return 0;
}
