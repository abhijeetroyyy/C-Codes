// Write a c program to check if a number is palindrome or not
#include <stdio.h>
int main()
{
    int n, c, s = 0, f;
    printf("Enter any number");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        f = n % 10;
        s = f + (s * 10);
        n = n / 10;
    }
    if (c == s)
    {
        printf("Palindrome number");
    }
    else{
printf("Not");
    }
    return 0;
}
