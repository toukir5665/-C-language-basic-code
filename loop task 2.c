#include <stdio.h>
int main()
{
    int i, c, n;
    printf("Enter your favorite car name: ");
    scanf("%c", &c);
    printf("Enter number: ");
    scanf("%n", &n);

    for(i=1; i>=n; i++)
    {
        printf("%d", i);
    }


    return 0;
}
