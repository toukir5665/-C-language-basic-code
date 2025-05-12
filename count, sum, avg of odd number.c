#include <stdio.h>

int main() {
    int numbers[10];
    int oddCount = 0;
    int Sum = 0;

    printf("Enter ten numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 != 0) {
            Sum += numbers[i];
            oddCount++;
        }
    }

    printf("\nOdd numbers entered: %d\n", oddCount);
    printf("Total of odd numbers: %d\n", Sum);

    if (oddCount > 0) {
        double oddAverage = (double)Sum / oddCount;
        printf("Average of odd numbers: %.2lf\n", oddAverage);
    }

    return 0;
}

