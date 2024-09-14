#include <iostream> /*WILL CONTINUE WRITING LATER!!!*/ /*REWRITE TO HELLOWORLD_CPP(JUNIORCONTENT)*/
using namespace std; /*WILL CONTINUE WRITING LATER!!!*/

class Player{
    protected:
    int health;
    public:
    void setAttributes(int health1){
        health = health1;
    }
    void attack(int enemy_health, int attack_damage){
        enemy_health-=attack_damage;
    }
};

class OrkPlayer : public Player{
    
};
class NinjaPlayer : public Player{

};
class HumanPlayer : public Player{

};
class RobotPlayer : public Player{

};
class MutantPlayer : public Player{

};



int main(){
    int p11,p12;
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
    cout << "Choose your character" << endl;
    cin >> p11 >> p12;
    if (p11==1){
        OrkPlayer p1;
        Player *p2=&p1;
        p2->setAttributes(OrkHealth);
        int player1_health=OrkHealth;
    }
    else if (p11==2){
        NinjaPlayer p1;
        Player *p2=&p1;
        p2->setAttributes(NinjaHealth);
        int player1_health=NinjaHealth;
    }
    else if (p11==3){
        HumanPlayer p1;
        Player *p2=&p1;
        p2->setAttributes(HumanHealth);
        int player1_health=HumanHealth;
    }
    else if(p11==4){
        RobotPlayer p1;
        Player *p2=&p1;
        p2->setAttributes(RobotHealth);
        int player1_health=RobotHealth;
    }
    else if(p11==5){
        MutantPlayer p1;
        Player *p2=&p1;
        p2->setAttributes(MutantHealth);
        int player1_health=MutantHealth;
    }

    if (p12==1){
        OrkPlayer p3;
        Player *p4=&p3;
        p4->setAttributes(OrkHealth);
        int player2_health=OrkHealth;
    }
    else if (p12==2){
        NinjaPlayer p3;
        Player *p4=&p3;
        p4->setAttributes(NinjaHealth);
        int player2_health=NinjaHealth;
    }
    else if (p12==3){
        HumanPlayer p3;
        Player *p4=&p3;
        p4->setAttributes(HumanHealth);
        int player2_health=HumanHealth;
    }
    else if(p12==4){
        RobotPlayer p3;
        Player *p4=&p3;
        p4->setAttributes(RobotHealth);
        int player2_health=RobotHealth;
    }
    else if(p12==5){
        MutantPlayer p3;
        Player *p4=&p3;
        p4->setAttributes(MutantHealth);
        int player2_health=MutantHealth;
    }

int i=0;
    while (Playerlife1==true and Playerlife2==true){
        cout << i << ":" << endl;
        cout << "Player1: Enter attack power and defence int: " << endl;
        cin >> attack_power1 >> defence_int2;
        cout << "Player2: Enter attack power and defence int: " << endl;
        cin >> attack_power2 >> defence_int2;
        if (attack_power1==defence_int2){
            cout << "Player2 parried the attack"<< endl;
        }
        else{
            
        }
    }

}