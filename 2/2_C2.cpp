#include<iostream>
#include<string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string space(i,  ' ');
        string draw(N - i, '*');
        cout << space << draw << endl;
    }

    return 0;
}
