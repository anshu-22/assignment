#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, differenceOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // difference of two numbers in stored in variable differenceOfTwoNumbers
    differenceOfTwoNumbers = firstNumber - secondNumber;

    // Prints difference 
    cout << firstNumber << " - " <<  secondNumber << " = " << differenceOfTwoNumbers; 
return 0;
}
