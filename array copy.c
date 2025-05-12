#include<stdio.h>
int main()
{
    int n, i;
    printf("How many elements: \n");
    scanf("%d", &n); //input array size
    int arr1[n], arr2[n];//declare array size
    printf("Enter array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("array[%d]= ", i);
        scanf("%d", &arr1[i]); //inserting array elements
    }
    //printing first array
    printf("\nArray 1 is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr1[i]);
    }
    //copying array into array 2 from array 1
    for(i=0; i<n; i++)
    {
        arr2[i]=arr1[i];
    }
    //printing array 2
    printf("\nArray 2 is: ");
    for(i=0; i<n; i++)
    {

        printf("%d\t", arr2[i]);
    }

    getch();
}
