#include<stdio.h>
int main()
{
    int i;
    for(i=10; i<50; i++)
    {
        if(i%2!=0)
        {
            printf("%d", i);
            if(i<49)
            {
                printf(" ");
            }
        }
    }

    return 0;
}
