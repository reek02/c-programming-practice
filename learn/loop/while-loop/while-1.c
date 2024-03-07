// Entry Controlled loops: In Entry controlled loops the test condition is checked before entering the main body of the loop.
// For Loop and While Loop is Entry-controlled loops.

/*
syntax : --------------------------------

while (condition) {
    statement
}

*/

#include <stdio.h>
int main(){
    
    int i=1;                               // declaration

    while ( i<=5 ) {                       // condition   
        printf("hello world\n");
        i++;                               // updation
    }
    return 0;
}