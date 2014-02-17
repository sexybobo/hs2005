/*
Name Jesse
Woot=yes
variables: feet, inches,
output=centemeters

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    float f, i, c, ti;
    cout<<"Enter number of feet"<<endl;
    cin>>f;
    cout<<"Enter Number of inches"<<endl;
    cin>>i;
    ti=(f*12)+i;
    c=ti*2.54;
    cout<<f<<" Feet  and "<<i<<" inches is "<< c <<" centemeters"<<endl;
    system("pause");
}

