/*
Name Jesse
Woot=yes
variables: movie name adult tickets, child tickets, # sold, c#sold, donation %,

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    
    float ap, cp, p, tp, pd, ad, nt;
    int at, ct, tt;
    string n;    
    cout<<"Enter Movie name"<<endl;
    cin>>n;
    cout<<"Enter Adult Ticket price"<<endl;
    cin>>ap;
    cout<<"Enter Child Ticket Price"<<endl;
    cin>>cp;
    cout<<"Enter # of adult tickets"<<endl;
    cin>>at;
    cout<<"Enter # of child tickets"<<endl;
    cin>>ct;
    cout<<"Enter percent donated"<<endl;
    cin>>p;
    tt=at+ct;
    tp=(at*ap)+(ct*cp);
    ad=tp*p/100;
    nt=tp-ad;
    cout;
    cout<<setprecision(2);
    cout<<fixed<<showpoint;
    cout<<setfill('.')<<left<<setw(35)<<"Movie Name"<<setfill(' ')<<right<<"$"<<setw(8)<<n<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Number of tickes sold"<<setfill(' ')<<right<<"$"<<setw(8)<<tt<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Gross amount"<<setfill(' ')<<right<<"$"<<setw(8)<<tp<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Percent donated"<<setfill(' ')<<right<<"$"<<setw(8)<<p<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Persent of total amount donated"<<setfill(' ')<<right<<"$"<<setw(8)<<ad<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Net sale"<<setfill(' ')<<right<<"$"<<setw(8)<<nt<<endl;
    system ("pause");
}    
    
    
    
