#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=7; i<=600; i++)
    {
        if(i%7==0 || i%9==0)
        {
            if(i%7==0 && i%9==0)
            {
                continue;
            }
            sum+=i;
            printf("%d ", i);
            if(i<595)
            {
                printf("+ ");
            }
        }
    }
    printf("=%d", sum);


    return 0;
}
