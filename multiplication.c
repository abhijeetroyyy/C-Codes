//write a program to print multiplication table of a given number n
#include<stdio.h>

int main(){
    int a,i,multi;
    printf("Enter the value of a");
    scanf("%d",&a);
    for (i=1;i<=10;i++){
        multi=a*i;
        printf("%d\n",multi);
    }
    return 0;
}