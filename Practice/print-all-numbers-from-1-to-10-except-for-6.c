// Print all numbers from 1 to 10 except 6 (using continue)

#include <stdio.h>
int main(){
    
    for ( int i=1; i<=10; i++){
        if ( i==6 ) {       //skip only 6
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}