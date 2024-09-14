#include <iostream>
using namespace std;


template<class T>
class Output{
    private:
    T a;
    public:
    Output(T a) : a(a) {
        cout << a << " is not a char or string." << endl;
    }
    ~Output(){
        cout << "For real." << endl;
    }
};
template<>
class Output<char>{
    private:
    char a;
    public:
    Output(char a) : a(a) {
        cout << a << " is a char." << endl;
    }
};

template<>
class Output<string>{
    private:
    string a;
    public:
    Output(string a) : a(a){
        cout << a << " is a string." << endl;
    }
};

int main(){
    double a;
    int b;
    char c;
    string d;
    cin >> a >> b >> c >> d;
    Output <double> obj1(a);
    Output <int> obj2(b);
    Output <char> obj3(c);
    Output <string> obj4(d);
}