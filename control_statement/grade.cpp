/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    char grade;

    std::cout << "Please enter letter grade" << std::endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        std::cout << "Great Job" << std::endl;
        break;

    case 'B':
    case 'b':
        std::cout << "Good job" << std::endl;
        break;

    case 'C':
    case 'c':
        std::cout << "You can do better" << std::endl;
        break;

    case 'D':
    case 'd':
        std::cout << "You ar almost failed" << std::endl;
        break;

    case 'F':
    case 'f':
        std::cout << "FAILED" << std::endl;
        break;
    
    default:
        std::cout << "Entered a non existing grade, you failed" << std::endl;
        break;
    }

    return 0;
}