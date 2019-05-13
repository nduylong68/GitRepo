#include<iostream>

using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N][N];
    for (int i = 0; i < N; i++)
    {
        int data = i+1;
        for (int j = 0; j< N; j++)
        {
            a[j][i] = data;
            data+=1;
            if (data > N) data = 1;
        }
    }

     for (int i = 0; i < N; i++)
    {
        for (int j = 0; j< N; j++)
        {
            cout << a[j][i] << "  ";
        }
        cout << endl;
    }
    return 0;
}
