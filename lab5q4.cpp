//C program to find whether a number is even or odd

#include<iostream>
using namespace std;

int main()
{
        int num;
        //Input a number
        cout <<"Input a number :";
        cin >> num;
        //If num modulo division 2 is 0
        //the number is even

        if(num%2 == 0)
{
        cout <<"Number is even.\n\n";
}
else 
 {
cout <<"Number is odd";
}
return 0;
}
