#include<stdio.h>
int main()
{
    int i, k, n;
    printf("How many elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Array[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("Old array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nHow many left shift: ");
    scanf("%d", &k);

    for(i=0; i<(n-k); i++)
    {
        arr[i]=arr[i+k];
    }

    for(i=n-k; i<n; i++)
    {
        arr[i]=0;
    }

    printf("\nAfter left shift array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }



    return 0;
}
