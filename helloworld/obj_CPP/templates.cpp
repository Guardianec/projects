#include <iostream>
using namespace std;

template <class T>
T divide(T a, T b){
    return a/b;
}

int main(){
    int a1,b1;
    double a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    cout << divide(a1,b1) << endl;
    cout << divide(a2,b2) << endl;
}