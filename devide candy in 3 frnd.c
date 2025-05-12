#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, total, ex;
    printf("\nHow many chocolate\'s do you have? ans: ");
    scanf("%d", &a);

    total= a/3;
    ex= a%3;

    printf(" \nEach friend will receive %d chocolates\n The number of remaining chocolates is %d \a\n\n ", total, ex);

    return 0;
}

