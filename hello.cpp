/*
Name Jesse
Woot=yes
variables: wage, hours work, taxes, deductibls, dependence,

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    float w, h, g, n, t, d, f;
    h=80;
    t=.2;
    d=150;
    cout<<"Hourly Wage"<<endl;
    cin>>w;
    cout<<"Number of Dependence"<<endl;
    cin>>f;
    g=w*h;
    n=g-(g*t)-d-(f*50);
    cout<<"XYZ Widget Companys Payroll Information"<<endl;
    cout<<"Your Curent 2 week Payroll with "<<f<<" dependence is:"<<endl;
    cout<<setprecision(2);
    cout<<fixed<<showpoint;
    cout<<left<<setw(20)<<"Hourly Wage"<<setfill(' ')<<right<<setw(20)<<"$"<<w<<endl;
    cout<<left<<setw(20)<<"Gross Pay"<<setfill(' ')<<right<<setw(20)<<"$"<<g<<endl;
    cout<<left<<setw(20)<<"Pention"<<setfill(' ')<<right<<setw(20)<<"$"<<"50"<<endl;
    cout<<left<<setw(20)<<"Health Insurance"<<setfill(' ')<<right<<setw(20)<<"$"<<100+(f*50)<<endl;
    cout<<left<<setw(20)<<"NetPay"<<setfill(' ')<<right<<setw(20)<<"$"<<n<<endl;
    system ("pause");
}
