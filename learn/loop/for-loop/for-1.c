// Entry Controlled loops: In Entry controlled loops the test condition is checked before entering the main body of the loop.
// For Loop and While Loop is Entry-controlled loops.

/* 
syntax :-
for (initializaation ; condition; updation) {
    statement
}

for (starting value ; when to end operation; increment/decrement)         */

#include <stdio.h>
int main(){
    
    for(int i=1; i<5; i++) {    //from 1-4 means it should print 4 times
        printf("Hello, world!\n");
    }
    return 0;
}



/* 
#include <stdio.h>
int main(){
    
    for(int i=0; i<5; i+1) {    //from 1-4 means it should print 4 times
        printf("Hello, world!\n");
    }
    return 0;
}     
  */

