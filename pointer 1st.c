#include<stdio.h>
int main()
{
    int x=10, y=20, sum;
    int *ptr, *ptr1;

    ptr=&x;
    ptr1=&y;                                    //* is astrek sine; & is amparcent sine;
    sum=*ptr+*ptr1;

    printf("Value of x  = %d\n", x);            //printing value of x in simple way
    printf("Value of x  = %d\n", *ptr);         //printing value of x using pointer
    printf("Sum of x and y= %d\n", sum);        //printing sum of x and y using pointer in variable
    printf("Sum of x and y= %d\n", *ptr+*ptr1); //printing sum of x and y using pointer in printf function
    printf("Address of pointer= %d\n",  &ptr);  //printing address of pointer variable
    printf("Address Sum= %d\n",  &sum);         //printing address of sum
    printf("Address of x= %d\n",  ptr);         //printing address of x using pointer
    printf("Address of x= %d\n", &x);           //printing address of x in general way

    return 0;
}
