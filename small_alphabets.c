//WRITE A PROGRAM TO DETERMINE WETHER A CHARACTER ENTERED BY THE USERIS LOWERCASE OT NOT
#include<stdio.h>

int main(){
    int ch;
    printf("Enter your character :- \n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97){
        printf("It is a lowercase Character");
    }
    else{
        printf("It is not a lower case character");
    }
    return 0;
}