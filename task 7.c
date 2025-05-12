#include<stdio.h>
#include<math.h>

int main()
{
     int A, B, C, result;
     float D;

     printf("Enter 4 number,First 3 are integers and last one a floating number: ");
     scanf("%d %d %d %f", &A, &B, &C, &D);

     result= pow(A, C)+B*A-D/3;

     printf("Result is \"%d\" \a", result);




    return 0;
}

