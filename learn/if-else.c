#include <stdio.h>
int main(){
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age >= 18) {
        printf("ADULT\n");
        printf("they can vote\n");
        printf("they can drive\n");
    } else {
        printf("NOT AN ADUL\n");
        printf("they can't vote\n");
        printf("they can't drive\n");
    }
printf("Thank You\n");
    return 0;
}