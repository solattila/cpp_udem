/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    char gender;

    std::cout << "Enter your age" << std::endl;
    cin >> age;
    std::cout << "Enter your gender(M/F)" << std::endl;
    cin >> gender;

    if (age >= 60)
    {
        switch (gender)
        {
        case 'F':
        case 'f':
            std::cout << "Qualify for discount" << std::endl;
            break;
        
        default:
            std::cout << "Not qualify for discount" << std::endl;
            break;
        }
    }else
    {
        std::cout << "Not qualify for discount" << std::endl;
    }
    
    

    return 0;
}