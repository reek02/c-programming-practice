//  Write a program to check if a given number is Armstrong number or not.

// Armstrong Number Algorithm:
// Start
// Read an integer input number.
// Declare and initialize the variables current_digit , sum = 0 and num = number.
// Repeat Steps 5 to 7 Until num > 0.
// current_digit = (num % 10) %10 return the last digit of the current number
// sum = sum + (current_digit current_digit current_digit).
// The variable current_digit is multiplied three times because we check for a three-digit Armstrong number.
// num = num / 10

// After processing the last digit, we need to remove it. /10 will give an integer such that the order of the number will be reduced and the next digit will become the last digit.
// Check if sum == number. Then Print “It is an Armstrong Number.” Else Print “It is not an Armstrong Number.”

#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
