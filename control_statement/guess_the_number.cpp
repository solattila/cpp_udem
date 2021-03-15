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

    int numb = rand() % 10 +1;

    std::cout << "I think a numb beetween 1 and 10. Guess it!" << std::endl;

    int count = 1;

    int guess;

    do
    {
        cin >> guess;
        if (guess == numb)
        {
            std::cout << "Yeas you guessd it in " << count << " steps" << std::endl;
        }else if (guess > numb)
        {
            std::cout << "My numb is less than your guess" << std::endl;
        }
        else
        {
            std::cout << "My numb is greater than your guess" << std::endl;
        }
        
        
        count++;

    } while (guess != numb);
    

    return 0;
}