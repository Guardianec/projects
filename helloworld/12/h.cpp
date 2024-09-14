#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int m=0;
    int list[100];
    for (int i = 1; i <= sqrt(n); i++){
        m++;
        list[i] = i;
    }
    for (int i = 1; i <= cbrt(n); i++){
        for(int j =0;j<=cbrt(n);j++){
            if(sqrt(list[j])==cbrt(i)){
                break;
            }
            if((j==round(sqrt(n)))||(j==round(sqrt(n)-1))){
                m++;
            }
        }
    }
    cout << m;
}