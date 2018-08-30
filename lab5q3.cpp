//C program to find whether a number is divisible by 5 and 11 or not

#include<iostream>
using namespace std;

int main()
{
        int num;
        //Input a number
        cout <<"input a number : ";
        cin >> num;
         
         // If  num modulo division 5 is 0 
         // and num modulo division 11 is 0 then
         // the number is divisible by 5 and 11 both
          
         if((num % 5 == 0) && (num % 11 == 0))
         {
        cout <<"Number is divisible by 5 and 11.\n\n";
         }
         else
         {
        cout <<"Number is not divisible by 5 and 11.\n\n";
         }

return 0;
}
