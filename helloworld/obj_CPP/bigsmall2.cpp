#include <iostream>
using namespace std;

template <class T>
class Pair {
    private:
    T first;
    T second;
    public:
    Pair(T a, T b)
    : first(a), second(b) {}
    T bigger(){
        return(first>second ? first:second);
    }
    T smaller(){
        return(first<second ? first:second);
    }
};

int main(){
    int a,b;
    cin>> a >> b;
    Pair <int> obj1(a,b);
    cout << obj1.bigger() << endl;
    cout << obj1.smaller() << endl;
    double x, y;
    cin >> x >> y;
    Pair <double> obj2(x,y);
    cout << obj2.bigger() << endl;
    cout << obj2.smaller() << endl;
}