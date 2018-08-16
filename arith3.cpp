#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, divisionOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // division of two numbers in stored in variable divisionOfTwoNumbers
    divisionOfTwoNumbers = firstNumber /secondNumber;

    // Prints divide
    cout << firstNumber << " / " <<  secondNumber << " = " << divisionOfTwoNumbers; 
return 0;
}

