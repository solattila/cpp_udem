#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int firstInt;
    firstInt = 15;
    cout << firstInt << endl;

    double firstDouble = 3.14159;
    cout << firstDouble << endl;

    double taxRate = 0.11;

    char singleChar = 'A';
    cout << singleChar << endl;

    string myName = "Attila";

    cout << "Hello " << myName << endl;

    bool isRaining = false;

    cout << boolalpha << isRaining << endl;

    bool isSunny = 1;
    bool isWarm = 0;
    cout << boolalpha << isSunny << endl << isWarm << endl;
    
    

    return 0;
}
