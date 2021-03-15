/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    int numb = 0, sum = 0;

    do
    {
        sum += numb;
        std::cout << "Enter a positive integer or negative to quit" << std::endl;
        cin >> numb;
        

    } while (numb >= 0);
    
    std::cout << sum << std::endl;
    return 0;
}