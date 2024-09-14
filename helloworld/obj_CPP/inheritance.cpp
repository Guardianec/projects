#include <iostream>
#include <string>

using namespace std;

class Student{
    protected: 
    string name;
    int age;
    int class1;
    public:
    Student(string nm, int ag, int cls)
    : name(nm), age(ag), class1(cls){
        cout << "SCHOOL HAS STARTED" << endl;
    }
    ~Student(){
        cout << "SCHOOL HAS ENDED" << endl;
    }
};
class Classmate : public Student{
    public:
    Classmate (string nm, int ag, int cls)
    : Student(nm, ag, cls) {}
    void getInfo(){
        cout << "STUDENT'S NAME: " << age << endl;
        cout << "STUDENT'S AGE: " << age << endl;
        cout << "STUDENT'S CLASS: " << class1 << endl;
    }
};
int main(){
    string name;
    int age,class1;
    cin >> name >> age >> class1;
    Classmate Artem(name, age, class1);
    Artem.getInfo();
}
