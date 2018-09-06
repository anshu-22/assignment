
//C program to print hollow diamond star pattern//

#include <iostream>
using namespace std;

int main()
{	
    int i, j, n;
    
    //Input the number of rows//
    cout<<"Enter value of n : \n\n";
    cin>> n;

    // Loop to print upper half of the pattern
    for(i=1; i<=n; i++)    
    {
        for(j=i; j<=n; j++)
        {
            cout<<"*";
        }
    //Assigning the loop for the pattern//
        for(j=1; j<=(2*i-2); j++)
        {
            cout<<" ";
        }
  
        for(j=i; j<=n; j++)
        {
   //printing of the stars//
            cout<<"*";
        }
    //move to the next line row//

        cout<<"\n";
    }

    // Loop to print lower half of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
    //Assigning the loop for the pattern//
        for(j=(2*i-2); j<(2*n-2); j++)
        {
    //printing of the space//
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
    //printing of the stars//
            cout<<"*";
        }
    //move to the next row//
        cout<<"\n";
    }

    return 0;
}
