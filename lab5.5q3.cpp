
//C program to print mirrored Rhombus star pattern series//
 
#include<iostream>
using namespace std;
int main()
{
    int i, j, N;

    //Input number of rows //
    cout<<"Input no. of rows: \n\n";
    cin>>N;

    for(i=1; i<=N; i++)
    {

        // assigning loops for spacing //
        for(j=1; j<=N - i; j++)
        {
            cout<<" ";
        }

        // Printing of stars //
        for(j=1; j<=N; j++)
        {
            cout<<"*";
        }

        // Move to the next line //
        cout<<"\n";
    }

    return 0;
}
