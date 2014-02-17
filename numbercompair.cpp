/*
name: Jesse Maupin
w00t=no
ask for numbers 
tell numbers
compair numbers
tell witch is larger
end
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers :";
    cin>>a>>b;
    cout<<endl;
    cout<<"The Two Numbers are "<<a<<" and "<<b<<endl;
    if (a==b)
    cout<<"They Are Equil Numbers"<<endl;  
    else 
    {
        if (a > b)
        cout<<"The larger number is "<<a<<endl;
        else
        cout<<"The larger number is "<<b<<endl;
    }
    system ("pause");
    return 0;
}
