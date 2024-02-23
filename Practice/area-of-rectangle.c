#include <stdio.h>
int main()
{
    int width, height, area;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);
    area = width * height;       // formula of AREA OF RECTANGLE
    printf("Area of rectangle: %d\n", area);
}