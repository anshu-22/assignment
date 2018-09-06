
//C program to print hollow mirrored rhombus star pattern//
 

#include <iostream>
using namespace std;

int main()
{
    int i, j, N;

    // Input number of rows //
    cout<<"Input no. of rows : \n\n";
    cin>> N;


    for(i=1; i<=N; i++)
    {
        //Assigning loops for spacing //
        for(j=1; j<=N-i; j++)
        {
            cout<<" ";
        }


        // Printing of stars//
        // Assigning of spaces between the stars//
        for(j=1; j<=N; j++)
        {
            //assigning loop for hollow shape//
            if(i==1 || i==N || j==1 || j==N)
                cout<<"*";
            else
                cout<<" ";
        }
        //move to the next line//
        cout<<"\n";
    }

    return 0;
}
