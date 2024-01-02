//write a program to print first n natural numbers using do-while loop
#include<stdio.h>

int main(){
    int a=0;
    int n;
    printf("eter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("The number is %d\n",a+1);
        a++;
    } while (a<n); 
    return 0;
}