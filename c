#include <stdio.h>

int main()
{
  int length, breadth, area;

  // Get the length from the user
  printf("Enter the length of the rectangle: ");
  scanf("%d", &length);

  // Get the breadth from the user
  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &breadth);

  // Calculate the area
  area = length * breadth;

  // Print the area
  printf("The area of the rectangle is: %d\n", area);

  return 0;
}
