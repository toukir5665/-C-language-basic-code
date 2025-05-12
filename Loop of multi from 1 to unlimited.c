#include <stdio.h>
int main()
{
    int n, i, m;
    printf("This program show the multiplication from 1 to n. Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
            for (m=1; m<=10; m++){
                printf("%dx%d=%d \n", i, m, m*i);
                }
        printf("\n");
    }

    return 0;
}

