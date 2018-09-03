//C program to find reverse of a no.
#include <iostream>
using namespace std;

int main()
{
    int n, reverse=0, rem;
    //Enter an integer to be reversed
    cout<<"Enter an integer:\n\n"
    ;cin>>n;

    //initialize the variable reverse to zero
    while(n!=0)
    {
    
     //obtain the remainder of the input no.
     rem = n%10;

     //multiply the variable reverse with 10 and add the obtained       remainder to it and store the result in the same variable
     reverse=reverse*10+rem;
     
     //obtain the quotient of the input number and considering this as   input number repeat until the obtained quotient becomes zero
     n=n/10;
     }
     cout<<"Reversed no. = "<<reverse;

    return 0;
}
