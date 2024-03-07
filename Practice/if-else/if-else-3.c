/* what will be the output : 
a. give error
b. print "x is equal to 1"
c. print "x is not equal to 1"    */

#include <stdio.h>
int main()
{
    int x = 2;
    if (x = 1)   // x stores the value as 1 instead of 2 
    {
        printf("x is equal to 1");  // any non-zero value is true 
    }
    else
    {
        printf("x is not equal to 1");
    }
    return 0;
}