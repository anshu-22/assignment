//C program to find whether the number is positive, negative or zero

#include <iostream>
using namespace std;

int main()
{
    int num1;

    //Input a number
    cout << " Input a number : ";
    cin >> num1;
    //If the number is positive    
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    //If the number is negative
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    //If the number is zero
    {
        cout << " The number is zero.\n\n";
    }
    return 0;
}
