// Define library
#include<iostream>
//Write the main function
using namespace std;

int main()
{

float km, met,cent;
cout << "\n\nConvert centimeter into meter and kilometer :\n";
//Enter the distance in cm	
cout << " Input the distance in centimeter : ";
cin >> cent;

//Convert it to meter and kilometer
met = (cent/100); 
km = (cent/100000);
cout << " The distance in meter is: "<< met << endl;
cout << " The distance in kilometer is: "<< km << endl;	
cout << endl;

return 0;
}
