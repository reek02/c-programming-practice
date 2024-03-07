#include <stdio.h>
#include <math.h> // for using pow function
int main(){
    float a = 5, b=2, power;    // using float becz int doesn't give the accurate number


    power = pow(a,b);

    printf("Power of the number: %f",power);

    return 0;
}