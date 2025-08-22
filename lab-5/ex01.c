#include <stdio.h>

int main() {
    int number[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("Values in array are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d", number[i]);
        if (i < 9) {
            printf(", ");
        }
    }

    return 0;
}
