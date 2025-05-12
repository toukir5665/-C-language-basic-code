#include <stdio.h>
int main()
{
    //int a, b;
    float x, y;
    printf("Enter two floating number ");
    scanf("%f %f", &x, &y);
    x= x*10, y= y*10;
    //a= x*10, b= y*10; // a,b 10x multiple
    printf("First Number %.1f\nSecond Number %.1f", x, y);

    return 0;
}
