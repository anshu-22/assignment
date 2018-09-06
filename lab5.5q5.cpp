
//C program to print pyramid star pattern//
 

#include <iostream>
using namespace std;
int main()
{
    int i, j, N;

    // Input number of rows to print //
    cout<<"Enter number of rows : \n\n";
    cin>> N;

    // printing of the rows //
    for(i=1; i<=N; i++)
    { 
        // assigning loops for spaces //
        for(j=i; j<N; j++)
        {
            cout<<" ";
        }

        // Printing of stars //
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }

        // Move to next line //
        cout<<"\n";
    }
return 0;
}

