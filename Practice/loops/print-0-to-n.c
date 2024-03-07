// Print the numbers from 0 to n, if n is given by user
// n = 4

#include <stdio.h>
int main()
{

    // int i, n;
    // printf("print number upto :- ");
    // scanf("%d",&n);

    // for ( i=0; i<=n; i++ ) {
    //     printf("%d\n", i);
    // }

    int n;
    printf("print number upto :- ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
        
    }

    return 0;
}