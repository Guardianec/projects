#include <iostream>
using namespace std;

template <class T, class U>
T smaller(T a, U b){
    return (a<b ? a : b);
}

int main(){
    int a;
    double b;
    cin >> a >> b;
    cout << smaller(a, b) << endl;
}