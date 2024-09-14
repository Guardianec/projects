#include <iostream>
using namespace std;

class MyClass{
    private:
    const int constvar;
    int normvar;
    public:
    MyClass(int a, int b)
    : normvar(a), constvar(b)
    {}
    void print(){
        cout << normvar << " " << constvar<< endl;
    }
};

int main(){
    int x,y;
    cin >> x >> y;
    MyClass clas(x,y);
    clas.print();
}