/*
    Created by: Attila Soltész
    Three category
    * if
    * if-else
    * switch
*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    std::cout << "Welcome to the pub" << std::endl;
    std::cout << "Please enter your age" << std::endl;
    cin >> age;

    if (age >= 21)
    {
        std::cout << "Here have a beer" << std::endl;
    }
    else if (age >= 16)
    {
        std::cout << "Here have a coke" << std::endl;
        std::cout << "And you can drive" << std::endl;
    }
    else
    {
        std::cout << "Here have a coke" << std::endl;
    }
    

    std::cout << "Thanks for coming to the pub" << std::endl;
    

    return 0;
}