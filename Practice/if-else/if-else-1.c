/*  write a program to check if a student passes or failed.
marks > 30 is pass 
marks <=30 is fail */

#include <stdio.h>
int main(){
    int marks;

    printf("Enter the marks (0-100) : ");
    scanf("%d",&marks);

    if (marks>=0 && marks <= 30) {
        printf("FAIL\n");
    }
    else if (marks>30 && marks <=100) {
        printf("PASS\n");
    }
    else  {
        printf("Wrong Input\n");
    }
    

    return 0;
}