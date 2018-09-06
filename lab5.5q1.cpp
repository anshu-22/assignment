// C program to print square star pattern
 

#include <iostream>
using namespace std;

int main()
{
    int i, j, N;

    
    cout<<"Enter number of rows: \n\n";
    cin>> N;

    // printing N number of rows //
    for(i=1; i<=N; i++)
    {
        // printing N number of column //
        for(j=1; j<=N; j++)
        {
            // Printing star for each column //
            cout<<"*";
        }
        // move to the next line
        cout<<"\n";
  
    }

    return 0;
}
