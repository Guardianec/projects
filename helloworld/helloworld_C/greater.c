#include <stdio.h>

int greater(int a, int b){
    if (a > b){
        return a;
    }
    else if (a < b){
        return b;
    }
    else{
        return a+b;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", greater(a,b));
}