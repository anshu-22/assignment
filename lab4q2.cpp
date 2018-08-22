//Define library
#include<iostream>
//Write the main function
using namespace std;

int main()
{

float fahrenheit, celsius;
//Input temperature in celcius
cout << "Enter the temperature in Celsius : ";
cin >> celsius;

//Convert to fahrenheit
fahrenheit = (celsius * 9) / 5 + 32;
cout << "The temperature in Celsius    : " << celsius << endl;
cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

return 0;

}
