//Define library
#include<iostream>
//Write the main function
using namespace std;
 
      int main()
{
      float base, ht, area;
      cout << "\n\n Find the area of a triangle :\n";
//Enter the base and height of triangle		
      cout<<" Input the base of the triangle : ";
      cin>>base;
      cout<<" Input the height of the triangle : ";
      cin>>ht;
//calculate area of the triangle
      area=(base*ht)/2;
      cout << " The area of the triangle is : " << area << endl;
      cout << endl;

return 0;
}
