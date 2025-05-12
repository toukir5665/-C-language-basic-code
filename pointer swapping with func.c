#include<stdio.h>
void swapping(int *ptr1, int *ptr2)
{
    int temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
}

int main()
{
    int x=10, y=20;
    int *ptr1, *ptr2;

    ptr1=&x;
    ptr2=&y;

    printf("Before swapping: \n");
    printf("Value of x= %u and y= %u\n\n", *ptr1, *ptr2);

    swapping(&x, &y);
    printf("After swapping:r\n");
    printf("Value of x= %u and y= %u\n\n", *ptr1, *ptr2);

    return 0;
}
