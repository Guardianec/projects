#include <iostream>
using namespace std;

int main(){
    try{
        int motherAge;
        int sonAge;
        cin >> motherAge >> sonAge;
        if (sonAge > motherAge-14){
            throw 99;
        }
    }
    catch(int x){
        cout << "Wrong age value - Error " << x << endl;
    }
}