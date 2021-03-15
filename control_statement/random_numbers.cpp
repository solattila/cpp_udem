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

    int val1 = rand() % 10;
    int val2 = rand() % 10 + 1;

    std::cout << val1 << std::endl;
    std::cout << val2 << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        
        int dice = rand() % 6 + 1;
        std::cout << endl << dice << std::endl;
    }

    return 0;
}