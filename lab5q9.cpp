//C++ program to display the factors of the entered number
//define the library
#include<iostream>
using namespace std;

int main()
{
   
    int num, i;
//input a no. of which factor is to be found
    cout << " Input a number: ";
    cin >> num;
    cout << "The factors are: ";
//defining the loop
    for (i = 1; i <= num; i++) 
    {
//Check for every number between 1 to n
//whether it divides N
        if (num % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;

return 0;
}
