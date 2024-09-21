#include <bits/stdc++.h>
using namespace std;

int main(){
    int k1,k2,k3;
    cin >> k1;
    cin >> k2;
    cin >> k3;
    int n=0;
    int x=0;
    if (k1>k2){
        x=k1;
        k1=k2;
        k2=x;
    }
    if (k1>k2){
        x=k2;
        k2=k3;
        k3=x;
    }
    if (k1>k2){
        x=k1;
        k1=k2;
        k2=x;
    }
    if (((k1+k2+k3)%3==0)){
        n=(k1+k2+k3)/3;
        cout << k3-n;
    }
    else{
        cout << "IMPOSSIBLE";
    }
    
}