#include <stdio.h>

int main() {
    long long number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Digits in reverse order: ");

    // Handle negative numbers
    if (number < 0) {
        printf("-");
        number = -number;
    }

    // Extract and print digits
    while (number > 0) {
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }

    printf("\n");

    return 0;
}

