//Define library
#include<iostream>
//Write the main function
using namespace std;
int main()
{

float fahrenheit, celsius;
//Enter the temp in fahrenheit
cout << "Enter the temperature in fahrenheit : ";
cin >> fahrenheit;

//convert temp to celcius
celsius=5*(fahrenheit-32)/9;
cout << "The temperature in Celsius    : " << celsius << endl;
cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

return 0;

}
