#include <iostream>
using namespace std;

class People{
    private:
    int day;
    int month;
    int year;
    string name;
    public:
    Person(int bd, int bm, int by, string nm)
    : day(bd), month(bm), year(by), name(nm)
    {}
    void getInfo(){
        cout<< day << " "<< month << " "<< year << " "<< name << endl;
    }
    void getPointerInfo(){
        cout 
    }
};

int main(){
    int day, month, year;
    cin >> day >> month >> year;
    string name;
    cin >> name;
    People Artem(day, month, year, name);
    Artem.getInfo();
    Artem.getPointerInfo();
}