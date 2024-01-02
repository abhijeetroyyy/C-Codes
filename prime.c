#include <stdio.h>

int main()
{
    int num=13, i=2, prime = 1;
    while (i < num)
    {
        if (num % i == 0 )
        {
            prime = 0;
            i++;
            break;
        }
    }
    if (prime == 0 )
    {
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }

    return 0;
}