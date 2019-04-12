#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* p = new char[n];
   String(const char* a)
   {
        n = strlen(a);
        for (int i = 0; i < n ; i++) {
            *(p+ i) = a[i];
        }
   }

   void print_str() {

         cout << p ;

   }

   void append()
   {

   }

   void destruct()
   {
        delete [] p;
   }

};

int main()
{
    String s("hello");
    s.print_str();
    s.destruct();
    return 0;
}
