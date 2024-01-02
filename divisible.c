// Write a program to to check whether a number is divisible by 97 or not
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a :- 3");
    scanf("%d",&a);
    if (97 % a == 0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}
