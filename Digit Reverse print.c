#include<stdio.h>

int count;
int rev_dig(int n)
{
    if(n>0)
    {
        int last=n%10;
        printf("%d\t", last);
        count++;
        return rev_dig(n/10);
    }
    else
        return;
}

int main()
{
    int n;
    printf("Enter any positive number: \n");
    scanf("%d", &n);
    rev_dig(n);
    printf("\nTotal digit: %d\n", count);

    return 0;
}

