#include <stdio.h>
int main()
{
    float x=3.3, y=5.5;
    printf("Enter two floating number ", x, y);
    scanf("%f %f", &x, &y);
    printf("First number is %0.1f\nSecond number is %0.1f", x*10, y*10);

    return 0;
}
