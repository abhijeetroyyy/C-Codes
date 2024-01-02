//Write a program to calculate simple intrest for a set of values representing principal no of years and rate of intrest
#include<stdio.h>

int main(){
    int principal=100 , rate=4 , years=5;
    int SI=(principal * rate * years)/100;
    printf("The SI is %d",SI);
    return 0;
}