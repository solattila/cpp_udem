/*
    Created by: Attila Soltész
    
*/

#include<iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three number" << endl;

    cin >> a >> b >> c;

    double sum = a + b + c;

    cout << "Average is: " << (sum / 3) << endl;

    return 0;
}