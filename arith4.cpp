#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, modulusOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // modulus of two numbers in stored in variable modulusOfTwoNumbers
    modulusOfTwoNumbers = firstNumber /secondNumber;

    // Prints modulus
    cout << firstNumber << " / " <<  secondNumber << " = " << modulusOfTwoNumbers; 
return 0;
}

