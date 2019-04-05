#include <iostream>
#include <cstring>

using namespace std;


char* concat(const char* x, const char* y)
{
    int n=strlen(x)+strlen(y);
    char *p = new char[n];
    strcpy(p, x);
    strcat(p, y);
    return p;
}

int main()
{
    const char* a="This is ";
    const char* b="Successful";
    char* c=concat(a,b);
    cout<<c;
}
