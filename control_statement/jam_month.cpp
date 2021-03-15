/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

void printPrice(int pack_price, int plus_price, int includes, int jams);

int main()
{
    char pack;
    std::cout << "What package?(A, B, C)" << std::endl;
    cin >> pack;

    int jams;
    std::cout << "How many jams in this month?" << std::endl;
    cin >> jams;
    std::cout << "You bought: " << jams << " jams in this month." << std::endl;


    switch (pack)
    {
    case 'A':
        printPrice(8, 5, 2, jams);
        
        break;

    case 'B':
        printPrice(12, 4, 4, jams);
        
        break;

    case 'C':
        printPrice(15, 3, 6, jams);
        
        break;
    
    default:
        break;
    }

    return 0;
}

void printPrice(int pack_price, int plus_price, int includes, int jams){

        int price = pack_price + (jams - includes) * plus_price;
        if (jams - includes >= 0)
        {
            std::cout << "You need to pay: " << price << std::endl;
        }
        else
        {
            std::cout << "You need to pay: " << pack_price << std::endl;
        }

}