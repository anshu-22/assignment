#include <iostream>
using namespace std;8

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    // Input marks of all five subjects //
    cout <<"Enter marks of five subjects: \n";
    cout <<"Input the marks of english : ";
    cin>>eng;
    cout <<"Input the marks of physics : ";
    cin>>phy;
    cout <<"Input the marks of chemistry : ";
    cin>>chem;
    cout <<"Input the marks of maths : ";
    cin>>math;
    cout <<"Input the marks of computer : ";
    cin>>comp;
    //Calculate total, average and percentage //
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    //Print all results //
    cout<<"Total marks:" << total <<endl;
    cout<<"Average marks :"<< average <<endl;
    cout<<"Percentage :"<< percentage <<endl;

    return 0;
}
