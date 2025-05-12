#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    printf ("Enter a Number: ");
    scanf("%d", &n);

    if (n >= 1 || n <= 10){
        printf("yes \n \a");
    }
    else {
        printf("no \n \a");
    }


    return 0;
}
