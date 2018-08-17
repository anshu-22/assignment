#include<iostream>
using namespace std;
//declare the main function
int main()
{
//declaring basic data types
int n=3;
float f=3.4
;char c='4'
;double d=7
;bool b=0;
//print the value of the basis data types
cout << n <<endl;
cout << f <<endl;
cout << c <<endl;
cout << d <<endl;
cout << b <<endl;
//print the size of the basic data types
cout << "The size of integer data type is "<< sizeof(n) << " bytes" <<endl;
cout << "The size of float data type is "<< sizeof(f) << " bytes" <<endl;
cout << "The size of character data type is "<< sizeof(c) << " bytes" <<endl;
cout << "The size of double data type is "<< sizeof(d) << " bytes" <<endl;
cout << "The size ofboolean data type is "<< sizeof(b) << " bytes" <<endl;
//return any integer value to int function
return 0;
}


