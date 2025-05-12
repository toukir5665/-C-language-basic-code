#include<stdio.h>
int main()
{
    int n, sum=0, i;
    for(i=63; i<=600; i++)
    {
        if(i%7==0 && i%9==0)
        {
            sum+=i;
            printf("%d ", i);
            if(i<567)
            {
                printf("+ ");
            }
        }
    }
    printf("= %d\n\n", sum);

    return 0;
}
