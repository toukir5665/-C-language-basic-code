#include<stdio.h>
int main()
{
    int i, arr[5]={10, 20, 30, 40, 50};
    int new_arr[7];

    for(i=0; i<7; i++)
    {
        if(i<5)
        {
            new_arr[i]=arr[i];
        }
        else
        {
            new_arr[i]=0;
        }
    }
    printf("New array is: ");
    for(i=0; i<7; i++)
    {
        printf("%d\t", new_arr[i]);
    }

    printf("\nOld array is: ");
    for(i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }

    getch ();
}
