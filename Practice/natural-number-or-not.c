//  Write a program to check if the given number is a natural number.

#include <stdio.h>
int main(){

    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if (num >= 1 ) {
        printf("Natural Number\n");
    }
    else{
        printf("Not a Natural Number\n");
    }

    return 0;
}