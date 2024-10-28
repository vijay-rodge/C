#include <stdio.h> //finding area of the circle
#define pi 3.14
int main()
{
    float radius, area;
    printf("The value of radius is:");
    sacnf("%f", radius);
    area = pi * radius * radius;
    printf("The area of the circle is %f", area);
    return 0;
}