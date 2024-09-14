#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,s1;
    cin >> h1 >> m1 >> s1;
    int h2,m2,s2;
    cin >> h2 >> m2 >> s2;
    int h,m,s;
    s1=s1+m1*60+h1*3600;
    s2=s2+m2*60+h2*3600;
    s=s2-s1;
    h=s/3600;
    m=s/60%60;
    s=s%60;
    cout << h << " " << m << " " << s;
}
