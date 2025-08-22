#include <stdio.h>

int main() {
    int number[5], max = number[0], sum;

    for (int i = 0; i < 5; i++){
        printf("Enter the marks of students %d: ", i+1);
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 5; i++) {
       
        if (number[i]> max){

            max = number[i];
        }
        sum += number[i];
        }

        printf("Total marks : %d\nHighest marks : %d\n", sum, max);
return 0;
    }

    

