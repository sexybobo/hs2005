/*
Name: Jesse Maupin
Block:  7
Due: 10-28-05
Program: Grades Avg
Input: t1,t2,t3,t4,t5,
avg
filein
fileout
studentID
Process:
Add test togethere/5 to get the average
Output: StudentID, Test Score, Average, in a file.
w00t=yes
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
//declare variables
ifstream inFile; //input file stream variables
ofstream outFile; //output file stream variables
int test1,test2,test3,test4,test5;
double average;
char studentID;
inFile.open("Z:\\Blk7-Carter\\Jesse Maupin\\test2.txt");
outFile.open("Z:\\Blk7-Carter\\Jesse Maupin\\TESTAVG.out");
outFile<<fixed<<showpoint<<setprecision (2);
cout<<"Processing data"<<endl;
inFile>>studentID;
outFile<<"Student ID: "<<studentID<<endl;
inFile>>test1>>test2>>test3>>test4>>test5;
outFile<<"Test Scores: "<<setw(4)<<test1<<setw(4)<<test2<<setw(4)<<test3<<setw(4)<<test4<<setw(4)<<test5<<endl;
average=(test1+test2+test3+test4+test5)/5;
outFile<<"Average Test Score: " <<setw(6)<<average<<endl;
inFile.close();
outFile.close();
system ("pause");
return 0;
}
