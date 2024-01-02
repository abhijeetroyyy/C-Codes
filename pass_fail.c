// WAP TO FIND OUT WHETHER A STUDENT IS PASS OR FAIL IF IT REQUIRES TOTAL 40% AND AT LEAST 33% IN EACH SUBJECT TO PASS ASSUME 3 SUBJECTS AND TAKES MARKS AS AN INPUT FROM THE USER
#include <stdio.h>
int main()
{
    int Maths, Physics, chemistry;
    float total;
    printf("Enter your maths percentage to know you are pass or fail :-\n");
    scanf("%d", &Maths);
    printf("Enter your physics percentage to know you are pass or fail :-\n");
    scanf("%d", &Physics);
    printf("Enter your chemistry percentage to know you are pass or fail :-\n");
    scanf("%d", &chemistry);
    total = (Maths + Physics + chemistry) / 3;
    if ((total <= 40) || Physics < 33 || Maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and you are failed\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are Passes\n", total);
    }
    return 0;
}