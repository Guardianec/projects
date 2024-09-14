#include <iostream>
#include <string>
using namespace std;
int main(){
    double a;
    double b;
    string c;
    cin >> a >> c >> b;
    if (c =="+"){
        cout << a+b;
    }
    else if (c=="-"){
        cout << a-b;
    }
    else if (c =="*")
        cout << a*b;
    else if (c == "/"){
        cout << a/b;
    }
}