/*
Jesse Maupin
10/4/05
Class: Lower Midle
Input: number of plants
Output: total cost
*/
#include <iostream>
using namespace std;
int main()
{
    //this is a comment
    float c, p;
    cout<<"Enter the number of plants sold"<<endl;
    cin>>p;
    if (p<0)
    {
    cout<<"The Number Can't be Below Zero."<<endl;
    system ("pause");
    exit (1);
    }
    if (p>10)
    {
    c=(4.20*p)*1.0825;
    }
    else
    {
    c=(4.95*p)*1.0825;  
    }
    cout<<"Your Purchase totals $"<<c<<endl;
    system ("pause");
    return 0;
}
    


