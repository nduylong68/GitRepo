#include <iostream>
#include <cstring>


using namespace std;


char* delete_char(const char* a, char b)
{
    int n = strlen(a);
    char *p = new char[n];
    int s = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i]!=b)
        {
            p[i-s]=a[i];
        }
        else
            s++;
    }
    return p;
}
int main()
{
    cout<<delete_char("InnnnnLnnnnnninnnnknnnnnennYnnnnnnnnnnounnnnnnnn", 'n');
}


