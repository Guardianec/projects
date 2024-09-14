#include <iostream>
using namespace std;

class Enemy{
    protected:
    int attackPower;
    public:
    void setAttackPower(int a){
        attackPower= a;
    }
};
class Ork : public Enemy{
    public:
    void attack(){
        cout << "Ork attacked you with "<< attackPower << " damage" << endl;
    }
};
class Monster : public Enemy{
    public:
    void attack(){
        cout << "Monster attacked you with "<< attackPower << " damage" << endl;
    }
};


int main(){
    Ork o;
    Monster m;
    Enemy *e1= &o;
    Enemy *e2= &m;
    int n1,n2;
    cin >> n1 >> n2;
    e1->setAttackPower(n1);
    e2->setAttackPower(n2);
    o.attack();
    m.attack();
}