#include <iostream>
using namespace std;

template<class T, class U>
T add(T x, U y){
    return x + y;
}
template<class T, class U>
T subtract(T x, U y){
    return x - y;
}
template<class T, class U>
T multiply(T x, U y){
    return x * y;
}
template<class T, class U>
T divide(T x, U y){
    return x / y;
}

int main(){
    double x;
    int y;
    char z;
    cin >> x >> z >> y;
    switch (z){
        case '+':
        cout << x << "+" << y << " is "<< add(x,y) << endl;
        break;
        case '-':
        cout << x << "-" << y << " is "<< subtract(x,y) << endl;
        break;
        case '*':
        cout << x << "*" << y << " is "<< multiply(x,y) << endl;
        break;
        case '/':
        if (y ==0){
            cout << "No division by zero." << endl;
        }
        else{
            cout << x << "/" << y << " is "<< divide(x,y) << endl;
        }
        
        break;
        default:
        cout << "Invalid character." << endl;
    }
}