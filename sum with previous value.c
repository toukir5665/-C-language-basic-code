
#include <stdio.h>

int main() {
    int numbers[5];
    int i, sum = 0;

    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("\nNumber %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];

        printf("Partial sum up to number %d: %d\n", i + 1, sum);
    }

    return 0;
}
