#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int m,k,n,f;
    cin >> m >> k >> n >> f;
    int m1,m2;
    int mass[4]={a,b,c,d};
    int t[4]={m,k,n,f};
    for (int i=0; i<4; i++)
    {
        if (t[i]==1){
            m1+=mass[i];
        }
        else if (t[i]==2){
            m2+=mass[i];
        }
    }
    cout << m1 << " " << m2 << endl;
    
}