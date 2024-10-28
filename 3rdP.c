#include <stdio.h>  //using BIT wise operator (Right Shift)
int main()
{
    int a,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
        c = a >> 1;
    printf("The Right shift of a is %d", c);
    return 0;
}