#include <iostream>
using namespace std;

template<class T>
class Number{
    private:
    T a;
    T b;
    public:
    Number(T a1, T b1)
    : a(a1), b(b1) {}
    T add(){
        return a + b;
    }
    T subtract(){
        return a - b;
    }
    T divide(){
        return a / b;
    }
    T multiply(){
        return a * b;
    }
    T square(){
        return a*a;
    }
};

int main(){
    int a1, b1;
    char c1,c2;
    double a2, b2;
    cin >> a1 >> c1 >> b1;
    cin >> a2 >> c2 >> b2;
    Number<int> n1(a1, b1);
    Number<double> n2(a2, b2);
    switch(c1){
        case '+':
        cout << n1.add() << endl;
        break;
        case '-':
        cout << n1.subtract() << endl;
        break;
        case '*':
        cout << n1.multiply() << endl;
        break;
        case '/':
        cout << n1.divide() << endl;
        break;
        case '#':
        cout << n1.square() << endl;
        break;
    }
    switch(c2){
        case '+':
        cout << n2.add() << endl;
        break;
        case '-':
        cout << n2.subtract() << endl;
        break;
        case '*':
        cout << n2.multiply() << endl;
        break;
        case '/':
        cout << n2.divide() << endl;
        break;
        case '#':
        cout << n2.square() << endl;
        break;
    }
}