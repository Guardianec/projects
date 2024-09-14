#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int n=a+b+c+d+e;
    if ((n%5==0)&&(n!=0)){
        cout << n/5;
    }
    else{
        cout << -1;
    }
}