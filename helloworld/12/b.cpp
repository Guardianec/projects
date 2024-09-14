#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double k=25+0.01*n;
    if(k<100){
        cout << 100;
    }
    else if(k>2000){
        cout << 2000;
    }
    else{
        cout << k;
    }
}