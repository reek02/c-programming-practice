// continue statement : skip to the next iteration

#include <stdio.h>
int main(){
    
    for( int i = 1; i <=5; i++ ) {
        if ( i == 3 ) {         // skip 3 and print 1 2 4 5 
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}