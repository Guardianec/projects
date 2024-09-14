#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        Student(string nm, int ag){
            setName(nm);
            setAge(ag);
        }
        void setName(string x){
            name=x;
        }
        void setAge(int y){
            age=y;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
    private:
        string name;
        int age;
};
int main(){
    string name1;
    int age1;
    cin >> name1 >> age1;
    Student Artem(name1,age1);
    cout << Artem.getName() << endl;
    cout << Artem.getAge() << endl;
}