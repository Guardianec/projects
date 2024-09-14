#include <stdio.h>

void divide(int* x, int* y, int a){
    *x /= a;
    *y /= a;
}
void multiply(int* x, int* y, int a){
    *x *= a;
    *y *= a;
}
void add(int* x, int* y, int a){
    *x += a;
    *y += a;
}
void subtract(int* x, int* y, int a){
    *x -= a;
    *y -= a;
}

int main (){
    int x, y, a;
    char c;
    scanf("%d %d %c %d", &x, &y, &c, &a);
    switch(c){
        case '+':
        add(&x, &y, a);
        break;
        case '-':
        subtract(&x, &y, a);
        break;
        case '*':
        multiply(&x, &y, a);
        break;
        case '/':
        divide(&x, &y, a);
    }
    printf("%d %d", x, y);
}