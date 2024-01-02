//WAP TO DISPLAY 10 TO 22 USING ARRAY
#include <stdio.h>

int main() {
    int numbers[13]; 
    int i;
    for (i = 0; i < 13; i++) {
        numbers[i] = 10 + i;
    for (i = 0; i < 13; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
}
