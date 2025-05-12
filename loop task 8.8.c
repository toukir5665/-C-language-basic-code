#include<stdio.h>
int main()
{
    int n, i, sum=0;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%7==0)
        {
            sum+=i;
            printf("%d", i);
            if(i<n-7)
            {
                printf("+");
            }
        }
    }
    printf("=%d\n\n", sum);

    return 0;
}
