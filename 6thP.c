#include<stdio.h>
//function prototype 
float calculateArea(float length,float width);
int main()
{
    float length,width,area;
    //input length and width of the rectangle
printf("Enter the length of the rectangle:");
scanf("%f",&length);
printf("Enter the width of the rectangle:");
scanf("%f",&width);
//calculate area by calling the function
area = calculateArea(length,width);
//output the result 
printf("the area of the rectangle is:%.2f\n",area);
return 0;
}
// give function to calculate thw area of rectangle 
float calculateArea(float length,float width)
{
    return length*width;
}