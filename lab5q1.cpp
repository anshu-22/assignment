
 //C program to find maximun between two numbers


#include <iostream>
using namespace std;

int main()
{
    
    int num1, num2;
    // Input two numbers 
    cout<<"Enter first number:"; 
    cin>>num1;
    cout<<"Enter second number:"; 
    cin>>num2;
    // If num1 is maximum
    if(num1>num2)
    {
	cout<<"First number "<<num1<<" is the largest";
    }
    //If num2 is maximum
    else
    {
	cout<<"Second number "<<num2<<" is the largest";
    }
    return 0;
}
