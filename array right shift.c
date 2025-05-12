#include<stdio.h>
int main()
{
    int i, k, n=5;
    //scanf("%d", &n);
    int arr[5]={10, 20, 30, 40, 50};
    printf("How many right shift?- ");
    scanf("%d",&k);

    printf("Old array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    for(i=n-1; i>(k-1); i--)
    {
        arr[i]=arr[i-k];
    }

    for(i=0; i<k; i++)
    {
        arr[i]=0;
    }
    printf("\nAfter shift array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }




    getch();
}
