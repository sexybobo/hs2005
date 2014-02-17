/*
Jesse Maupin
w00t=yes
*/
//Game Stats
//demonstrates constraint
#include <iostream>
using namespace std;
int main()
{
    const int alien_points=150;
    int aliensKilled=10;
    int score=aliensKilled*alien_points;
    cout<<"Score: "<<score<<endl;
    enum dificulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    dificulty myDifficulty=EASY;
    enum ship {FIGHTER=25, BOMBER, CRUISER=50, DESTROYER=100};
    ship myShip=BOMBER;
    cout<<"\nTo upgrade my ship to a cruiser will cost "<<(CRUISER-myShip)<<" Resource points.\n;
    system ("pause");
    return 0;
}
    
