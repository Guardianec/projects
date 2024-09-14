#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }

    if(a==max){
        cout << 0 << " ";
    }
    else{
        cout << max-a+1 << " ";
    }

    if(b==max){
        cout << 0 << " ";
    }
    else{
        cout << max-b+1 << " ";
    }

    if(c==max){
        cout << 0 << " ";
    }
    else{
        cout << max-c+1;
    }
}