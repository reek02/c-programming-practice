// break is used to exit the loop
// break also ussed to get exit from the nested loop

#include <stdio.h>
int main(){
    
    for (int i=1; i<=5; i++) {
        if ( i==3 ) {                // when i will be 3
            break;                   // will print only 1 and 2 
        }
        printf("%d\n", i);
    }

    printf("end");

    return 0;
}