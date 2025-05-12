#include <stdio.h>
#include <math.h>
int main()
{
    int n, remainer;

    printf ("Enter a number: ");
    scanf("%d", &n);

    remainer= n/2;

    if (remainer == 0){
        printf("The number is prime\n \a");
    }


    /*else if (n < 0) {
        printf("The number is odd\n \a");
    }*/

    else {
        printf("The number is odd!\n \a");
    }


    return 0;
}

