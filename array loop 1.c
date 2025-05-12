#include<stdio.h>
int main()
{
    int j, i, marks[5];//={80, 10, 36, 62, 63};

    for (j=0; j<5; j++)
    {
        printf("Enter %d marks: ", j+1);
        scanf("%d", &marks[j]);
    }


    printf("\nTotal input 5 \n\n");

        for (j=0; j<=4; j++){
            printf("Input no %d is: %d \n", j+1, marks[j]);
        }


    return 0;
}
