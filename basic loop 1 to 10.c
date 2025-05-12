#include <stdio.h>
int main()
{
    int n;

    for (n=1; n<100; n=n+1)
    {
        printf("%d \n \a", n);
        if(n == 10)
            break;
    }



    return 0;
}
