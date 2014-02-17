/*
File: struct_ex.cpp
By: bob
date: 8/22/01
w00t= yess
purpos demonstrates strut.
algorithm:input current balance and intrest, calculates balance in one year using intrest: fv=pv*(1+i)
*/
#include <iostream>
using namespace std;
struct bank_cd
{
    float balance, rate;
};
int main()
{
    bank_cd sample_account;
    //get balance
    cout<<"Enter amount of deposit: $";
    cin>>sample_account.balance;
    //get intrest
    cout<<endl<<"Enter intrest rate:";
    cin>>sample_account.rate;
    //calculate balance in 1 year.
    cout<<"\n\nCurrent Balance $"<<sample_account.balance<<endl;
    cout<<"In one year, Your Balance will be: $"<<sample_account.balance*(1+sample_account.rate)<<endl;
    system ("pause");
    }
    
