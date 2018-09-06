//c program for printing hollow star square pattern

#include<iostream>
using namespace std;
int main()
{
int i, j, N;

    // Input number of rows from user //
    cout<<"Enter number of rows:\n\n ";
    cin>> N;

    //printing N number of rows //
    for(i=1; i<=N; i++)
    {
        // printing N number of columns //
        for(j=1; j<=N; j++)
        {
             //assigning loops for hollow shape//
            if(i==1 || i==N || j==1 || j==N)
            {
                // Printing star for 1st, Nth row and column //
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        // Move to the next line row //
        cout<<"\n";
    }
return 0;
}
