/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    for (size_t i = 0; i < 50; i++)
    {
        if (i%2 == 0)
        {
            std::cout << i << " is even" << std::endl;
        }
        else
        {
            std::cout << i << " is odd" << std::endl;
        }
        
        
    }
    

    return 0;
}