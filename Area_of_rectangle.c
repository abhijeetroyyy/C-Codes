// write a program to find the area of rectangle
#include <stdio.h>
int main()
{
    int length, bredth, area;
    printf("Enter the length : \n");
    scanf("%d", &length);
    printf("Enter the Bredth : \n");
    scanf("%d", &bredth);
    area = length * bredth;
    printf("The area is %d", area);
    return 0;
}