/*
Name:           Jesse Maupin
Course:         Intro To Programming
Program:        Change
DueDate:        Today
Description:    Calculates amount of change 
Inputs:         Amount of change
Process:        a/50=r/25=r/10=r/5=r/1
Output:         Half Dollars, Quarters, Dime, nickels, and pennies
*/
#include <iostream>
using namespace std;
int main()
//init variabible
{
    const int h=50,q=25,d=10,n=5,p=1;
    int a;
    cout<<"Enter Total Amount of change"<<endl;
    cin>>a;
    cout<<"You entered "<<a<<" cents"<<endl;
    cout<<endl;
    cout<<a/h<<" Half Dollars "<<endl;
    a=a%h;
    cout<<a/q<<" Quarters"<<endl;
    a=a%q;
    cout<<a/d<<" Dimes"<<endl;
    a=a%d;
    cout<<a/n<<" Nickels"<<endl;
    a=a%n;
    cout<<a/p<<" Pennies"<<endl;
    system("pause");
}
    
