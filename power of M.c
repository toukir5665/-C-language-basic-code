#include <stdio.h>
#include <math.h>
int main()
{
    int M, N, sum;

    printf("Enter the value of M and N for M^N: ");
    scanf("%d %d", &M, &N);

    int m=M, n=N;

    sum= pow(M, N);

    printf("Your result is, %d^%d= %d \a", m, n, sum);

    return 0;

}
