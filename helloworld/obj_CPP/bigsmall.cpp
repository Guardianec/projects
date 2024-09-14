#include <iostream>
using namespace std;

template <class T>
class Pair{
    private:
    T first,second;
    public:
    Pair(T a, T b)
    : first(a), second(b){}
    T bigger();
    T smaller();
};

template <class T>
T Pair<T>::bigger(){
    return (first > second ? first : second);
}
template <class T>
T Pair<T>::smaller(){
    return (first < second ? first : second);
}

int main(){
    int a,b;
    cin >> a >> b;
    Pair <int> obj(a,b);
    cout << obj.bigger() << endl;
    cout << obj.smaller() << endl;
}