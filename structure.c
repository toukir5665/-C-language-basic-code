#include<stdio.h>
#include<stdlib.h>

// global stucturer
struct person
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    struct person prsn1, prsn2, prsn3;//struct person variable

    //first person information input
    printf("Enter person  1 information: \n");
    printf("Enter name: \n");
    fflush(stdin);
    gets(prsn1.name);
    printf("Enter age: \n");
    scanf("%d", prsn1.age);
    printf("Enter salary: \n");
    scanf("%f", prsn1.salary);

    //First person information printing;
    printf("Name: %s\nAge: %d\nSalary: %.2f\n\n",prsn1.name ,prsn1.age, prsn1.salary);





    return 0;
}
