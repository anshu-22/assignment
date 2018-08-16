#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, multiplicationOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // multiplication of two numbers in stored in variable multiplicationOfTwoNumbers
    multiplicationOfTwoNumbers = firstNumber * secondNumber;

    // Prints multiply 
    cout << firstNumber << " * " <<  secondNumber << " = " << multiplicationOfTwoNumbers; 
return 0;
}

