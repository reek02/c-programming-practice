#include <stdio.h>
int main()
{
    int day;
    printf("Enter day(1-7): "); // 1-mon, 2-tue, 3-wed, 4-thrus, 5-fri, 6-sat, 7-sun
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Saturday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Not a valid day");
        
    }

    return 0;
}
