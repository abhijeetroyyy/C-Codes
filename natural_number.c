//Write a program to print natiral numbers from 10 to 20 when initial loop counter is initializes to 0
#include<stdio.h>

int main(){
    int a;
    a=0;
    while (a<=20)
    {
        if (a>=10){
        printf("%d\n",a);
        }
        a++;
    }
    return 0;
}