#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, wt, ex;
    printf("Enter the total weight in KG:  ");
    scanf("%d", &a);

    b= a/4;
    ex= a%4;
    wt= b*4;

    printf("\nYou can take %d KG\n and you can't take %d KG \a\n\n", wt, ex);

    return 0;
}

