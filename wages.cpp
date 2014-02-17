/*
Name: Jesse Maupin
Woot: Yes
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<showpoint<<setprecision (2);
    float hours, rate, overtime, pay, op;
    cout<<"Enter working hours and Rate:"<<endl;
    cin>>hours>>rate;
    overtime=hours-40;
    if (overtime>0)
    {
    op=(overtime*rate)*1.5;
    }
    if (hours<=40)
    {
    pay=(hours*rate);
    }
    else
    {
    pay=(40*rate)+op;
    }
    cout<<"The Wages are : $"<<pay<<endl;
    system ("pause");
    return 0;
}
    
