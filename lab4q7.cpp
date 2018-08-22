//Define library

#include<iostream>
#include<cmath>
//Write the main function
using namespace std;
 
      int main()
      {
      float s1, area;
      
      cout << "\n\n Find the area of a triangle :\n";
//Enter the side of equivalent triangle
		
      cout<<" Input the side of the equilateral triangle : ";
      cin>>s1;
//calculte the area of equilateral triangle
      area = (sqrt(3)*s1*s1)/4;

      cout << " The area of the triangle is : " << area << endl;
      cout << endl;

return 0;
}
