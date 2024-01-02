// write a program to find the area of circle
#include<stdio.h>
int main()
{
    int r, area;
    float pi=3.141;
    printf("enter the value of R : \n");
    scanf("%d",&r);
    area=pi*r*r;
    printf("The area of the circle is %f",area);
    return 0;
}