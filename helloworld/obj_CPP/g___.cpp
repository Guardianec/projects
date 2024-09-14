#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    void setAttributes(string nm, int ag) {
        name = nm;
        age = ag;
    }
    void getAttributes(){
        cout << name << " " << age << endl;
    }
};
class Person2{
    protected:
    string name;
    int age;
    public:
    Person2(string nm, int ag)
    : name(nm), age(ag) {}
    void getAttributes(){
        cout << name << " " << age << endl;
    }
};

int main(){
    Person Artem;
    Artem.setAttributes("Artem", 14);
    Artem.getAttributes();

    Person2 Ben("Ben", 14);
    Ben.getAttributes();

    
}