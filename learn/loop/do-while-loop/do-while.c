// Exit Controlled loops: In Exit controlled loops the test condition is evaluated at the end of the loop body. 
// The loop body will execute at least once, irrespective of whether the condition is true or false. 
// do-while Loop is Exit Controlled loop.

/*

syntax : --------------------------------

do {
    statement                             // do the work
} whhile (condition);                     // until this condition 

*/

#include <stdio.h>
int main(){
    
    int i=1;

    do {
        printf("%d\n", i);
        i++;
    } while ( i<=5 );


    return 0;
}