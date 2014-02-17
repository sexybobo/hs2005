/*
name:jesse
woot=yes
input=age
if a =18 or higher then do something
else something
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cout<<fixed<<showpoint<<setprecision (2);
    cout<<"What is your age?"<<endl;
    cin>>a;
    if (a>=18)
    {
        cout<<"You are elegable to Vote\n";
        cout<<"No longer a minor.\n";
    }
    else
    {
        cout<<"You are not elegable to vote\n";
        cout<<"Still a minor.\n";
    }
system ("pause");
return 0;
}
