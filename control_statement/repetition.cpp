/*
    Created by: Attila Soltész
    Three category
    * while loops
    * do-while loops
    * for loops
*/

#include<iostream>
using namespace std;

int main()
{
    int count = 0;

    // while loop
    while (count < 10)
    {
        std::cout << count << std::endl;
        count++;
    }

    cout << endl << endl;
    int count2 = 0;
    // do-while loop
    do
    {
        std::cout << count2 << std::endl;
        count2++;
    } while (count2 < 10);
    
    cout << endl << endl;
    count2 = 20;
    // do-while loop
    do
    {
        std::cout << count2 << std::endl;
        count2++;
    } while (count2 < 10);

    // for loop
    cout << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    
    int input;
    std::cout << "Enter a positive integer, or negative to quit" << std::endl;
    cin >> input;

    while (input >= 0)
    {
        std::cout << input << std::endl;
        std::cout << "Enter a positive integer, or negative to quit" << std::endl;
        cin >> input;
    }
    


    return 0;
}