#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b,c,d;
    a=n/1000%10;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    int n1=0;
    n1=n;
    int m=0;
    int list[4]={a,b,c,d};
    for(int i=0;i<4;i++){
        n=n/(pow(10,i));
        for(int j=0;j<4;j++){
            n=n+list[j];
            if(n%3==0){
                m++;
            }
            n=n-list[j];
        }
        n=n1;
    }
    
}