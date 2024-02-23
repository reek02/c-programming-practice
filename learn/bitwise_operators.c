#include <stdio.h>
int main(){
    int a = 2; //10
    int b = 3; //11
    printf("a and b   -----> %d\n", a & b);
    printf("a or b   -----> %d\n", a | b);
    printf("a xor b   -----> %d\n", a ^ b);
    // printf("a complement b   -----> %d\n", a ~ b);
    printf("a shift right operator b   -----> %d\n", a >> b);
    printf("a shift left operator b   -----> %d\n", a << b);
    
    return 0;
}