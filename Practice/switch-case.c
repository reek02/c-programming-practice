#include <stdio.h>
int main(){
    char ch;
    
    printf("Enter any one of the following alphabets - a, b or c : ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':
            printf("a as in ashar\n");
            break;
        case 'b':
        case 'B':
            printf("b as in brain\n");    
            break;
        case 'c':
        case 'C':
            printf("c as in cookies\n");
            break;
        default:
            printf("Unknown alphabet\n");                        
    
    return 0;
    }
}