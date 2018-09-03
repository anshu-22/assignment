// C program to print even no. from 1 to n 
#include <iostream> 
using namespace std; 
  
int main() {  
    int i=1,n;
    //enter the value of n 
    cout<<"Enter a no.\n";  
    cin>>n;
    // defining the loop  
    while(i<=n){  
    // Even numbers are divisible by 2 //  
    if(i%2 == 0) { 
    // counter is even, print it //
    cout<<i<<" ";  
    }  
    i++;
     
    }
    return 0;  
} 

