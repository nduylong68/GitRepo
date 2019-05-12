#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    bool mirror = true;
    int st = 0;
    int en = a.length() - 1;
    while (mirror == true)
    {
        if (st >= en)
        {
            cout << "Yes" << endl;
            mirror = false;
        }
        else
        {
        if (a[st] != a[en])
        {
            mirror = false;
            cout << "No" << endl;
            break;
        }
        st+=1;
        en-= 1;
        }
    }

    return 0;
}
