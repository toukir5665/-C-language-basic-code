#include<stdio.h>
int main()
{
    int n, i, sum, negsum=0, possum=0;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d", i*i);
            possum+=(i*i);
            if(i<n)
            {
                printf("-");
            }
        }
        else
        {
            printf("%d", i*i);
            negsum+=(i*i);
            if(i<n)
            {
                printf("+");
            }
        }
    }
    sum=possum-negsum;
    printf(" = %d", sum);

    return 0;
}
