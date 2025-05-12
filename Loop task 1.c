#include <stdio.h>
int main()
{
    int i;
    printf("a) ");
    for(i=24; i>=-6; i=i-6)
    {
        printf("%d", i);
        if(i>-6)
        {
            printf(" ");
        }
    }

    printf("\nb) ");
    for(i=-10; i<=20; i=i+5)
    {
        printf("%d", i);
        if(i<20)
        {
            printf(" ");
        }
    }

    printf("\nc) ");
    for(i=18; i<=63; i=i+9)
    {
        printf("%d", i);
        if(i<63)
        {
            printf(" ");
        }
    }

    printf("\nd) ");
    for(int j=18, i=-27; j<=54, i>=-63; j=j+18, i=i-18)
    {
        printf("%d %d", j, i);
        if(j<54 || i>-63)
        {
            printf(" ");
        }
    }
    printf("\n\n");


    return 0;
}
