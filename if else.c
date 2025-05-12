#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    printf ("Enter a number: ");
    scanf("%d", &n);

    if (n > 0){
        printf("The number is positive\n \a");
    }


    else if (n < 0) {
        printf("The number is negative\n \a");
    }

    else {
        printf("The number is zero!\n \a");
    }


    return 0;
}
