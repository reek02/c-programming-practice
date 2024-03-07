
#include <stdio.h>
int main(){
    
    int n;
    printf("Enter the range upto : ");
    scanf("%d",&n);

    int sum = 0;
    for ( int i=1; i<=n; i++ ) {           //upto
        sum = sum + i;          // 0+1 = 1 , 1+2 = 3, 3+3=6, 6+4=10
        // printf("%d\n",sum);
    }

    printf("Sum is %d\n", sum);

    for (int i=n; i>=1; i--) {             // reverse it
        printf("%d\n", i);
    }

    return 0;
}



// write rev in another format


// #include <stdio.h>
// int main(){
    
//     int n;
//     printf("Enter the range upto : ");
//     scanf("%d",&n);

//     int sum = 0;
//     for ( int j=n; j>=1; j--) {     
//         sum = sum + j;         
//         printf("%d\n", j);
//     }

//     printf("Sum is %d\n", sum);

//     return 0;
// }