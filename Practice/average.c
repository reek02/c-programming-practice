// average of 3 numbers

#include <stdio.h>
int main(){
    int num1, num2,num3, avg;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    
    printf("Enter 3rd number: ");
    scanf("%d",&num3);

    avg = (num1 + num2 + num3) / 3;

    printf("Average of 3 numbers: %d", avg);
    
    return 0;
}