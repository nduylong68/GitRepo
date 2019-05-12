#include<iostream>
#include<set>

using namespace std;

int main()
{
    int N;
    cin >> N;
    set<int> a;
    bool result = false;
    for(int i = 0; i <N; i ++)
    {
        int n;
        cin >> n;
        set<int>::iterator fi = a.find(n);
        if (fi != a.end())
        {
            result = true;
            break;
        }
        else
        {
            a.insert(n);
        }
    }
    if (result == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
