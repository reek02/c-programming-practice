// Write a Program to find if a character entered by user is upper case or not.

#include <stdio.h>
int main(){
    
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {              // work as ASCII values   // ch>=97 
    printf("Uppercase\n"); 
    }
    else if (ch >= 'a' && ch <= 'z') { 
        printf("Lowercase\n"); 
    }
    else {
        printf("Not an english character\n");  
    }
    return 0;
}