#include<stdio.h>
int main()
{
    int x=10, y=20, temp;
    int *ptr1, *ptr2;

    ptr1=&x;
    ptr2=&y;

    printf("Before swapping: \n");
    printf("Value of x= %u and y= %u\n\n", *ptr1, *ptr2);

    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;

    printf("After swapping: \n");
    printf("Value of x= %u and y= %u\n\n", *ptr1, *ptr2);

    return 0;
}
