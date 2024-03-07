#include <stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 2 == 0) 
    {
    printf("Number is EVEN",num );
    }
    else {
        printf("Number is ODD ",num);
    }
    return 0;
}