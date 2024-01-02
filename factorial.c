//write a program to calculate the factorial of a given number using for loop and while loop
#include<stdio.h>

int main(){
    int i=1 , n=7,factorial=1; 
    // for (i=1;i<=n;i++){
    //     factorial*=i; 
    // }
    while (i<=n)
    {
        factorial*=i;
        i++;
    }
    
    printf("the factorial is %d %d",n,factorial);
    return 0;
}