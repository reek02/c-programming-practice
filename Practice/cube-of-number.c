#include <stdio.h>
int main(){
    int num, cube;

    printf("Enter the number : ");
    scanf("%d",&num);

    cube = num * num * num ;

    printf("cube of a number :  %d",cube);

    return 0;
}