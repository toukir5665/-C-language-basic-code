#include<stdio.h>
int main()
{
    int n, i;
    char name[30];

    printf("Enter favorite car name: ");
    scanf("%s", name);
    printf("How many times: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("%s\n", name);
    }

    return 0;
}

