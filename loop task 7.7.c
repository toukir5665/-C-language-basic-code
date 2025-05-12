#include<stdio.h>
int main()
{
    int n, i, sum=0, count;
    double avg;
    for(i=0; i<10; i++)
    {
        scanf("%d", &n);
        if(n%2!=0)
        {
            sum+=n;
            count++;
        }
    }
    avg=sum/count;
    printf("\nThe otal of the odd numbers is %d and their average is %.1lf\n", sum, avg);

    return 0;
}
