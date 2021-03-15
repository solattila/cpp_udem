/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    int count = 0;

    while (count < 10)
    {
        if (count == 5)
        {
            count++;
            continue;
            
        }
        
        std::cout << count << std::endl;
        count++;
    }

    for (int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        std::cout << i << std::endl;
    }

    cout << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i%2 != 0)
        {
            continue;
        }

        std::cout << i << std::endl;
        
    }
    
    
    

    return 0;
}