//Abosolute Value
#include <iostream>
using namespace std;
int main()
{
    int number, temp;  //floas temp and number
    cout<<"Please enter an integer: "; // ask for a number
    cin>>number; /// input #
    cout<<endl; //endl
    temp=number; //sets temp to numb
    if(number<0) /////// sets if to <0
    number=-number;//////////////////////////////number = the oposit
    cout<<"The absolute value of "<<temp<<" is "<<number<<endl; //displays value
    system ("pause");//pauses
    return 0;//returns 0
}
