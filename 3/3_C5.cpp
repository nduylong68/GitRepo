#include<iostream>

using namespace std;

int main()
{
   int x, y;
   cin >> x >> y;
   int recData = 1;
   int step = 1; // 1 -> x tang, 2 -> y tang , 3 -> x giam, 4 -> y giam;
   int maxvalue = x*y;
   int a[x][y];
   int recX = 0, recY = 0, maxX = x , maxY = y;
   bool stop = false;
   while (stop != true)
   {
       switch (step)
       {
       case 1:
            for(int i = 0; i < maxX; i++)
            {
                a[recX][recY] = recData;
                recData+=1;
                recX+=1;
            }
            maxY -= 1;
            recX-= 1;
            step = 2;
            recY += 1;

        break;

       case 2:
           {
              for (int i = 0; i< maxY; i++)
              {
                  a[recX][recY] = recData;
                  recData += 1;
                  recY += 1;
              }
              maxX -= 1;
              recY -= 1;
              step = 3;
              recX -= 1;
           }
           break;

       case 3:
        {
            for (int i = 0; i < maxX; i++)
            {
                a[recX][recY] = recData;
                recData += 1;
                recX-=1;
            }
            maxY-=1;
            recX+=1;
            step = 4;
            recY -= 1;
        }
        break;

       case 4:
        {
            for (int i = 0; i < maxY; i++)
            {
                a[recX][recY] = recData;
                recData += 1;
                recY -= 1;

            }
            maxX -= 1;
            recY+=1;
            step = 1;
            recX+=1;
        }
        break;

       }
       if (recData > maxvalue) stop = true;
   }

   for (int i = 0; i< y; i ++)
   {
       for (int j = 0; j< x; j++)
       {
           cout << a[j][i] << " "; //<< "vi tri: " <<j <<i << "- " << "gia tri: " <<a[j][i] << " ";
       }
       cout << endl;
   }

   return 0;
}
