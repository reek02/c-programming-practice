#include <stdio.h>
int main()
{
    int area, radius;
    float pi=3.14;
    printf("Enter radius: ");
    scanf("%d", &radius);
    
    // Area of Circle = πr^2
    area = pi * radius * radius;
    printf("Area of Circle: %d\n", area);

    // Volume of Cylinder = π r^2 h
    int height, volume_of_cylinder;
    printf("Enter height: ");
    scanf("%d", &height);
    volume_of_cylinder = pi * radius * radius * height;
    printf("Volume of Cylinder: %d\n", volume_of_cylinder);
    return 0;




}