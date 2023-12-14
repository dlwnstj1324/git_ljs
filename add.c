#include <stdio.h>
void add_mul(int a, int b, int *x, int *y){
    *x = a + b;
    *y = a * b;
}
int main(){
    int a, b, x, y;
    a = 5;
    b = 3;
    add_mul(a, b, &x, &y);

    return 0;
}
