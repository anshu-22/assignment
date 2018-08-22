//Define library
#include<iostream>
//Write the main function
using namespace std;
 
int main()
{
 int ang1, ang2, ang3;
cout << "\n\n Find the third angle of a triangle :\n";
//Enter the two angles of triangle		
cout<<" Input the 1st angle of the triangle : ";
cin>>ang1;
cout<<" Input the 2nd angle of the triangle : ";
cin>>ang2;

//calculate third angle
ang3=180-(ang1+ang2);
cout << " The 3rd of the triangle is : " << ang3 << endl;
cout << endl;

return 0;
}



