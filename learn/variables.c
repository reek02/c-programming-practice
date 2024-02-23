#include <stdio.h>
int main()
{
    int a = 5;
    // int b = 8.5;    //Not Recommended becz of 8.5 is not an integer
    float b = 8.5;
    char c = 'H';
    int d = 9;
    int e = a + d;
    printf("variable of a is: %d\n", a);
    printf("variable of b is: %f\n", b);
    printf("variable of c is: %c\n", c);

    // types you can print a variables with datatypes
    printf("variable of a is: %d %d\n", a, a);
    printf("variable of b is: %f %f %f\n", b, b, b);

    
    printf("sum of variables a and d : %d\n", e);
    printf("sum of variables a and d : %d\n", a + d);
    // printf("sum of interger variables - a and d : %d %d\n", a + d);  // overflow for using 2 %d
    // printf("sum of variables a and b : %d %f\n", a + b);    //undefined
    return 0;
}