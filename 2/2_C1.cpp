#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    bool result = true;
    for (int i = 2; i < N; i++)
    {
        if (N%i == 0)
        {
            result = false;
            break;
        }
    }

    if (result == false) cout << "No";
    else cout <<"Yes";
    return 0;
}
