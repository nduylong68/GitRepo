#include<iostream>
#include<string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = N; i >= 1; i--)
    {
        string space(N-i,  ' ');
        string draw(i, '*');
        string draw2(i-1,'*');
        cout << space << draw << draw2 << endl;
    }

    return 0;
}


