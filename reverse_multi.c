//write a program to print reverse multiplication table of a given number n
#include<stdio.h>

int main(){
    int a,i,multi;
    printf("Enter the value of a");
    scanf("%d",&a);
    for (i=10;i;i--){
        multi=a*i;
        printf("%d\n",multi);
    }
    return 0;
}