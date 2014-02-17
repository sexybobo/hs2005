/*
Name:           Jesse Maupin
Course:         Intro To Programming
Program:        House Painter
DueDate:        Today
Description:    Figures out amount of pain a painter needs to paint a house
Inputs:         Height, width, Coats.
Process:        Pain=((h*w)*c)/12.1
Output:         #of leitrs needed to paint wall
*/
#include <iostream>
using namespace std;
int main()
//init variables
{
float h,w,c,l;
//info
    cout<<"Enter Height of Wall"<<endl;
    cin>>h;
    cout<<"Enter Width of Wall"<<endl;
    cin>>w;
    cout<<"Enter Numbers of Coats"<<endl;
    cin>>c;
//math
    l=((h*w)*c)/12.1;
    cout<<"Your need "<<l<<" liter's of paint"<<endl;
    system ("pause");
}
    
