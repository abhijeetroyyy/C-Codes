// write a program to find the sum of first 10 natural numbers
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    // for (i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }
    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("%d\n", sum);
    return 0;
}