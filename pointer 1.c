#include<stdio.h>
int main()
{
    int x=10, y=5, sum, prod, adi, div;
    int *p, *q;
    p=&x;
    q=&y;

    sum= *p + *q;
    prod= *p * *q;
    adi= *p - *q;
    div= *p / *q;

    printf("%d  %d %d %d %d\n\n", &x, &p, *p, x, &p);
    printf(" Sum= %d\n Multiplication= %d\n Addition= %d\n Divition= %d\n\n", sum, prod, adi, div);



    return 0;
}
