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
    float w, h, g, n, t, d, f; // init variables
    h=80;                       //sets h to 80
    t=.2;                      //sets t to .2
    d=150;                    //sets d to 150
    cout<<"Hourly Wage"<<endl;  //ask user for input wage
    cin>>w;                        //axcepts wage
    cout<<"Number of Dependence"<<endl; //ask # of dependence
    cin>>f;                                //acepts # of dependence
    g=w*h;                                //finds gross pay
    n=g-(g*t)-d-(f*50);                    // net pay
    cout<<"XYZ Widget Companys Payroll Information"<<endl;//displayes company name
    cout<<"Your Curent 2 week Payroll with "<<f<<" dependence is:"<<endl; // displays info
    cout<<setprecision(2); //sets it to 2 decimal places
    cout<<fixed<<showpoint; // shows point and fixed
    cout<<left<<setw(20)<<"Hourly Wage"<<setfill(' ')<<right<<setw(20)<<"$"<<w<<endl; //displayes data
    cout<<left<<setw(20)<<"Gross Pay"<<setfill(' ')<<right<<setw(20)<<"$"<<g<<endl;//displayes data
    cout<<left<<setw(20)<<"Pention"<<setfill(' ')<<right<<setw(20)<<"$"<<"50"<<endl;//displayes data
    cout<<left<<setw(20)<<"Health Insurance"<<setfill(' ')<<right<<setw(20)<<"$"<<100+(f*50)<<endl;//displayes data
    cout<<left<<setw(20)<<"NetPay"<<setfill(' ')<<right<<setw(20)<<"$"<<n<<endl;//displayes data
    system ("pause");//pauses
}
