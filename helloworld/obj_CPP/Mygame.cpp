#include <iostream> /*REWRITE WITH SETERS AND GETERS*/ 
using namespace std; /*MAKE FUNCTION CHANGE HEALTH!!!*/


int main(){
    int p1,p2;
    int OrkHealth=200;
    int NinjaHealth=60;
    int HumanHealth=90;
    int RobotHealth=120;
    int MutantHealth=130;
    bool Playerlife1=true;
    bool Playerlife2=true;
    int attack_power1=0;
    int attack_power2=0;
    int defence_int1=0;
    int defence_int2=0;
    int player1_health=0;
    int player2_health=0;

    cin >> p1 >> p2;

    switch(p1){
        case 1:
        player1_health=OrkHealth;
        cout << "Player 1 is an Ork."<< endl;
        break;
        case 2:
        player1_health=NinjaHealth;
        cout << "Plyer 1 is a Ninja."<< endl;
        break;
        case 3:
        player1_health=HumanHealth;
        cout << "Player 1 is a Human."<< endl;
        break;
        case 4:
        player1_health=RobotHealth;
        cout << "Player 1 is a Robot." << endl;
        break;
        case 5:
        player1_health=MutantHealth;
        cout << "Player 1 is a Mutant."<< endl;
        break;
    }
    cout << "Player 1 health: " << player1_health << endl;

    switch(p2){
        case 1:
        player2_health=OrkHealth;
        cout << "Player 2 is an Ork."<< endl;
        break;
        case 2:
        player2_health=NinjaHealth;
        cout << "Player 2 is a Ninja." <<endl;
        break;
        case 3:
        player2_health=HumanHealth;
        cout << "Player 2 is a Human."<< endl;
        break;
        case 4:
        player2_health=RobotHealth;
        cout << "Player 2 is a Robot."<< endl;
        break;
        case 5:
        player2_health=MutantHealth;
        cout << "Player 2 is a Mutant." << endl;
        break;
    }
    cout << "Player 2 health: " << player2_health << endl;
    cout << "Game is starting..."<< endl;
    int count=1;
    while (Playerlife1==true && Playerlife2==true){
        cout << "Turn " << count << "." << endl;
        cout << "Player 1: Enter your attack power and defence int:"<< endl;
        cin >> attack_power1 >> defence_int1;
        cout << "Player 2: Enter your attack power and defence int:"<< endl;
        cin >> attack_power2 >> defence_int2;
        if (attack_power1==defence_int2){
            cout << "Player 2 paried the attack."<< endl;
            cout << "Player 2 has "<< player2_health << " health left." << endl;
        }
        else{
            cout << "Player 2 was hit!" << endl;
            player2_health-=attack_power1;
            cout << "Player 2 has " << player2_health << " health left." << endl;
        }
        if (attack_power2==defence_int1){
            cout << "Player 1 paried the attack."<< endl;
            cout << "Player 1 has " << player1_health << " health left." << endl;
        }
        else{
            cout << "Player 1 was hit!" << endl;
            player1_health-=attack_power2;
            cout << "Player 1 has " << player1_health << " health left." << endl;
        }
        if (player1_health<=0){
            Playerlife1=false;
        }
        if (player2_health<=0){
            Playerlife2=false;
        }
        if (Playerlife1==false){
            cout << "Player 2 won!" << endl;
            cout << "Game is over."<< endl;
            break;
        }
        else if (Playerlife2==false){
            cout << "Player 1 won!" << endl;
            cout << "Game is over." << endl;
            break;
        }
        count++;
    }
}