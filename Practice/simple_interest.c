#include <stdio.h>
int main(){
    int p, r , t ;
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter time: ");
    scanf("%d", &t);
    int simple_interest = (p * r * t) / 100;
    printf("The Value of Simple Interest: %d", simple_interest);
    return 0;
}