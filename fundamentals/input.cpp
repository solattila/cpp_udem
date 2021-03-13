/*
    Created by: Attila Soltész
    
*/

#include<iostream>
#include <string>
using namespace std;

int main()
{
/*     cout << "Enter your name" << endl;
    string fullname;
    getline(cin, fullname);

    cout << "Hello " << fullname << endl;

    cout << "Enter your age:" << endl;
    int age;
    cin >> age;
    cout << age << endl; */

    string fullName;
    string location;
    int initialScore;

    cout << "Enter your name" << endl;
    getline(cin, fullName);

    cout << "Enter your location" << endl;
    cin >> location;

    cout << "Enter your initial score" << endl;
    cin >> initialScore;

    initialScore += 5;

    cout << "Hello, " << fullName << endl << "You are from: " << location << endl << "Your score is initial score plus five: " << initialScore << endl;

    return 0;
}