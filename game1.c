// a game to generate random number and user have to guess it
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,numguess=1;
    srand(time(0));
    number=rand()%100+1;
    do
    {
        printf("Guess a number between 1 and 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please\n");
        }
        else if (guess<number)
        {
            printf("Higher number please\n");
        }
        else{
            printf("You guessed in %d attemt\n",numguess);
        }
        numguess++;
    } while (guess!=number);
    printf("the number is %d",number);
    return 0;
}