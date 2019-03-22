#include<iostream>
#include<cstdlib>
#include<time.h>
#include<thread>
#include<chrono>

using namespace std;


void updateRabit(int& Pos_rab);

void updateTurtle( int& Pos_tur);



int main()
{
    srand(time(NULL));
    int Pos_rab = 0;
    int Pos_tur = 0;
    //cout << " 1" << endl;
    cout << "Both are at 0" << endl;
    cout << "Start" << endl;

    while ( Pos_rab < 70 && Pos_tur < 70)
    {
        cout << endl;
        updateTurtle(Pos_tur);
        updateRabit(Pos_rab);

        this_thread::sleep_for(chrono::milliseconds(1000));

    }

    if (Pos_rab >= 70) cout << "Rabit is the winner !!" ;
    else cout << "Turtle is the winner !!" ;


    return 0;
}

void updateRabit(int& Pos_rab)
{
    int Random = rand() % 10 + 1;
    switch (Random)
    {
    case 1:
    case 2:
        break;
    case 3:
    case 4:
        Pos_rab += 9;
        break;
    case 5:
        Pos_rab -= 12;
        break;
    case 6:
    case 7:
    case 8:
        Pos_rab += 1;
        break;
    case 9:
    case 10:
        Pos_rab -= 2;
        break;
    }

    if (Pos_rab < 0) Pos_rab = 0;
    cout << " Rabit is at: " << Pos_rab << endl;

}


void updateTurtle( int& Pos_tur)
{
    int Random2 = rand() % 10 + 1;
    switch (Random2)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        Pos_tur += 3;
        break;
    case 6:
    case 7:
    case 8:
        Pos_tur += 1;
        break;
    case 9:
    case 10:
        Pos_tur -= 6;
        break;
    }

    if (Pos_tur < 0) Pos_tur = 0;
    cout << " Turtle is at: " << Pos_tur << endl;
}

