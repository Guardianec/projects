#include <iostream>
using namespace std;

int main(){
    int n,a,e1,e2;
    a=1;
    cin >> n;
    e1=0;
    e2=1;
    int list[100];
    for(int i=0; i<n; i++){
        list[i]=i+1;
        e1+=i+1;
        e2*=i+1;
    }
    if (e1==e2){
        for(int i;i<n;i++){
            cout << list[i] << " ";
        }
    }
    else{
        cout << "-1";
    }
    
}