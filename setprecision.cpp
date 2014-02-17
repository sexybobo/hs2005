#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double y=76.384;    //creates xyz
    int x=19;       //gives x a number
    int a=345;
    cout<<fixed<<showpoint;                              //fixed scientific notation show point gives you 0 after decimal thing
        cout<<"12345678901234567890"<<endl;     //setsprecision to 2 2 decimal points
    cout<<setw(5)<<x<<endl;                       //shows x in # of decimals mentioned above
    cout<<setw(5)<<a<<setw(5)<<"HI"<<setw(5)<<x<<endl;
    cout<<setprecision(2);     //setsprecision to 2 2 decimal points
    cout<<setw(6)<<a<<setw(6)<<y<<setw(6)<<x<<endl;
    cout<<setw(6)<<x<<setw(6)<<a<<setw(6)<<y<<endl;
    cout<<setw(5)<<a<<x<<endl;
    cout<<setw(2)<<a<<setw(4)<<x<<endl;
    system ("pause");
}

