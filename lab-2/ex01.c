#include<stdio.h>
int main(){
    int intValue;
    float floatValue;
    char charValue;

    printf("Please enter an integer value:");
    scanf(" %d", &intValue);

    printf("Please enter a float value:");
    scanf(" %f", &floatValue);

    printf("Please enter a character:");
    scanf(" %c", &charValue);

    printf("You entered %d\n",intValue);
    printf("You entered %.1f\n", floatValue);
    printf("You entered %c\n", charValue);
    return 0;
}