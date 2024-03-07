// keep taking numbers as input from user until user enters an odd number (using break)

#include <stdio.h>
int main(){
    int n;
    do {
        printf("Enter a number : \n");
        scanf("%d",&n);

        if ( n%2 != 0) {
            break; 
        }

    } while (1);

    printf("Thank you \n");

    return 0;
}