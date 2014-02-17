/*
Name: Jesse Maupin
Woot: Yes
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float kw,n;
cout<<fixed<<showpoint<<setprecision (2);
cout<<"Enter number of used kilowatts"<<endl;
cin>>kw;
if (kw<0)
cout<<"I am Sorry you entered a negative number plz Renter amount"<<endl;
else
{
    if (kw>2000)
    {
    n=kw-2000;
    cout<<"Your cost is $"<<(n*.05)+(1000*.08)+(1000*.1)+12.87<<endl;
    }
    else
    {
        if (kw>1000)
        {
                n=kw-1000;
                cout<<"Your cost is $"<<(n*.08)+(1000*.1)+12.87<<endl;
        }
        else
        {
                cout<<"Your cost is $"<<(kw*.1)+12.87<<endl;
        }
    }
}
system ("pause");
}
    
