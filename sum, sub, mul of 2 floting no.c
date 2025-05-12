#include <stdio.h>
 int main()
 {
   float x, y, sum, sub, mul;
   printf("Enter two floating number: ", x, y);
   scanf("%f %f", &x, &y);

   sum= x+y;
   sub= x-y;
   mul= x*y;

   printf(" Sum-> %0.2f\n Sub-> %.2f\n mul-> %.2f", sum, sub, mul);

   return 0;
 }
