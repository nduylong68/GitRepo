#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    int so[3];
    for(int i =0; i<3; i++) {
        cin >> so[i];
        cout << so + i << " " ;
    }
    // cac dia chi in ra lien tuc va cach nhau 4 bit ==> de luu tru bien dang int can 4 bit //
    cout << endl;
    int g, h;
    cin >> g >> h;
    cout << &g << &h << endl;
    char kitu[3];
    for (int i = 0; i < 3; i ++) {
    cin >> kitu[i];
    cout << (int*) &kitu[i] << " " ;

    }
    // cac dia chi in ra cach nhau 1 bit ==> de luu tru bien dang char can 1` bit //
    char d, e ;
    cin >> d >> e;
    cout <<(int*)&d << " " << (int*)&e << endl;
    return 0;
}
// cac bien khai bao sau mang se duoc luu vao vung bo  nho truoc vung bo nho su dung cho mang//
// khai bao truoc mang duoc luu vao vung bo nho sau vung duoc dung cho mang. //
