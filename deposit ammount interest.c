#include<stdio.h>
int main()
{
  float dep, inte, total, yr, int_yr;
  printf(" Enter your deposit amount: ");
  scanf("%f", &dep);

  inte=dep*0.11;
  printf(" Your Interest: %.2fTk \n", inte);

  total=dep+inte;
  printf(" Total in one month: %.2fTk \n ", total);

  yr=dep*12;
  printf(" You will get without interest: %.2fTk \n", yr);

  int_yr=total*12;
  printf(" You will get with interest: %.2fTk \n \a", int_yr);




    return 0;
}
