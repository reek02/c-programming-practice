/* Program Explanation : -
Get three inputs num1, num2 and num3 from user using scanf statements.

Check whether num1 is smaller than num2 and num3 using if statement, if it is true print num1 is smallest using printf statement.

Else, num2 or num3 is smallest.

So check whether num2 is smaller than num3 using elseif statement.

if num2 is greater, then print num2 is smallest using printf statement.

Else, print num3 is smallest using printf statement. */


#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1 < num2 && num1 < num3)
	{
		printf("%d is smallest",num1);
	}
	else if(num2 < num3)
	{
		printf("%d is smallest",num2);
	}
	else
	{
		printf("%d is smallest",num3);
	}	
	return 0;
}
			
				
			