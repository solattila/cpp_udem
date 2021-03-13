/*
    Arithmetic operators
    + addition
    - subtraction
    * multiplication
    / division
    % modulus
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10, b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Reminder: " << remainder << endl;

    int result = 10;
    result += 10;   // result = result + 10
    cout << "Result: " << result << endl;


    return 0;
}
