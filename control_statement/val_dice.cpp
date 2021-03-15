/*
    Created by: Attila Soltész
    
*/

#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));

    double dice1 = 0;
    double dice2 = 0;
    double dice3 = 0;
    double dice4 = 0;
    double dice5 = 0;
    double dice6 = 0;

    for (size_t i = 0; i < 10000; i++)
    {
        
        int dice = rand() % 6 + 1;

//        std::cout << dice << std::endl;

        switch (dice)
        {
        case 1:
            dice1++;
            break;
        
        case 2:
            dice2++;
            break;

        case 3:
            dice3++;
            break;

        case 4:
            dice4++;
            break;

        case 5:
            dice5++;
            break;

        case 6:
            dice6++;
            break;
        
        default:
            break;
        }
        
    }

    cout << "1: " << dice1 << endl
        << "2: " << dice2 << endl
        << "3: " << dice3 << endl
        << "4: " << dice4 << endl
        << "5: " << dice5 << endl
        << "6: " << dice6 << endl;

    cout << "1: " << (dice1/10000) << endl
        << "2: " << (dice2/10000) << endl
        << "3: " << (dice3/10000) << endl
        << "4: " << (dice4/10000) << endl
        << "5: " << (dice5/10000) << endl
        << "6: " << (dice6/10000) << endl;

    return 0;
}