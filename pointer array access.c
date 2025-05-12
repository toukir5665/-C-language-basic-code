#include<stdio.h>
int main()
{
    int array[5]={10, 20, 30, 40, 50};
    int *ptr;

    ptr=&array;  //also declare as ptr=&array[0];

    for(int i=0; i<5; i++)
    {
        printf("array[%d]= %d\n", i, *ptr);
        ptr++;
    }


    return 0;
}
