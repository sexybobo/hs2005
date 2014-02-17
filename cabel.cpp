/*
Name: Jesse Maupin
Woot: Yes
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char c;
int pc, n, con, co;
cout<<fixed<<showpoint<<setprecision (2);
cout<<"Acount number"<<endl;
cin>>n;
cout<<"Enter Customer type : R or r (residental), or B or b (buisness)"<<endl;
cin>>c;
cout<<endl;

switch (c)
{
case 'r':
case 'R': cout<<"Enter the number of premium channels: ";
cin>>pc;
cout<<endl;
cout<<"Acount number :"<<n<<endl;
cout<<"Amount Due $"<<25+(pc*7.5)<<endl;
break;
case 'b':
case 'B': cout<<"Enter the number of premium channels: ";
cin>>pc;
cout<<"Enter the number of connections: ";
cin>>con;
cout<<endl;
if (con<=10)
{
cout<<"Acount number :"<<n<<endl;
cout<<"Amount Due $"<<15+(pc*50)+75<<endl;
}
else
{
co=con-10;
cout<<"Acount number :"<<n<<endl;
cout<<"Amount Due $"<<15+(pc*50)+75+(co*5)<<endl;
}
break;
default:cout<<"you entered a bad choise you uber dumkof try again"<<endl;
}
system ("pause");
return 0;
}

