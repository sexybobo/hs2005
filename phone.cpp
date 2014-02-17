/*
Name:           Jesse Maupin
Course:         Intro To Programming
Program:        Cellphone Cost
DueDate:        Today
Description:    This Program ask for imput to determin a monthly billbased on inputes
Inputs:         Daytime Minets, Night time Minutes
Process:        Cost=$35.00 rate + ((daytime minutes*15cents)+(nighttume*5cents))
Output:         Cost
*/
#include <iostream>
using namespace std;
int main()
//init variables

{
float d, n, b;
//info
    cout<<"Enter total Daytime minutes--"<<endl;
    cin>>d ;
    cout<<"Enter total Nighttime minutes--"<<endl;
    cin>>n ;
//math
    b=35.0+(d*.15)+(n*.15);
    cout<<"Your monthly cell phone bill is $"<<b<<endl;
    system ("pause");
}
    
