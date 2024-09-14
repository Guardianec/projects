#include <iostream>

using namespace std;
class Big{
    public:
    Big(){
        cout<< "YEAH VERY BIG!"<< endl;
    }
    ~Big(){
        cout<< "YEAH VERY VERY BIG!"<< endl;
    }
};
int main(){
    Big big;
}