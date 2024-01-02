//write a program to print n natural numbers in reverse order 
#include<stdio.h>

int main(){
    int a,i;
    printf("Enter the value of a");
    scanf("%d",&a);
    for (i=a;i;i--){
        printf("%d\n",i);
    }
    return 0;
}