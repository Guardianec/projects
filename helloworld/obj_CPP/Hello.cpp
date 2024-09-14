#include <iostream>
using namespace std;

class Hello{
    public:
    void print(){
        cout << "Hello";
    }
};

int main(){
    Hello a;
    Hello *p=&a;
    p->print();
}