//Define library
#include<iostream>
//Write the main function
using namespace std;

int main()
{
float years, weeks, days;
//enter the days
cout << "Enter the number of days : ";
cin >> days;

//convert to weeks and days
weeks = (days/7);
years = (days/365);

cout << "The days in weeks is :"<< weeks << endl;
cout << "The days in years is :"<< years << endl;
cout << endl;

return 0;
}
