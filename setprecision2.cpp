#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double y=76.384;    //gives y
    int x=19;       //gives x a number
    int a=345;//gives a a number
    cout<<fixed<<showpoint;//setw means #ends at #                              
    cout<<"12345678901234567890"<<endl;//setw means #ends at #     
    cout<<setw(5)<<x<<endl;//setw means #ends at #                       
    cout<<setw(5)<<a<<setw(5)<<"HI"<<setw(5)<<x<<endl;//setw means #ends at #
    cout<<setprecision(2);//setw means #ends at # 
    cout<<setw(6)<<a<<setw(6)<<y<<setw(6)<<x<<endl;//setw means #ends at #
    cout<<setw(6)<<x<<setw(6)<<a<<setw(6)<<y<<endl;//setw means #ends at #
    cout<<setw(5)<<a<<x<<endl;//setw means #ends at #
    cout<<setw(2)<<a<<setw(4)<<x<<endl;//setw means #ends at #
    system ("pause");
}

