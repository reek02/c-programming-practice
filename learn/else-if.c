#include <stdio.h>
int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("ADULT\n");
    }
    else if(age>13 && age<18)
    {
        printf("Teenager\n");
    }
    else
    {
        printf("child\n");
    }
    return 0;
}