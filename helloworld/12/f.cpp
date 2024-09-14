#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    int h,w;
    h=a>c?a:c;
    w=b+d;
    int n=(h*w)-(a*b+c*d);
    cout << h << " " << w << endl;
    cout << n;
}