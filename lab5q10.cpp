//C program to find the sum of n no. of positive integer
//defining library

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    //enter the integer upto which the sum is required
    cout << "Enter a positive integer: ";
    cin >> n;
    //defining the loop
    for (int i = 1; i <= n; ++i)
    {
    //sum of n integers
    sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
