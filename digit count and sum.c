
#include<stdio.h>

int n, last_dig, temp=0, sum=0, count=0;

check(int n)
{
    while (n!=0)
    {
        count++;
        last_dig=n%10;
        sum=sum+last_dig;
        temp=10*(sum + last_dig);
        n=n/10;

    }
}

int main()
{


    printf("Enter any number: ");
    scanf("%d", &n);

    check(n);

    printf("\nTotal digit  : %d", count);
    printf("\nSum of digit : %d", sum);
    getch();
}
