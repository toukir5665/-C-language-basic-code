#include<stdio.h>
int main(){

    float balance, total_balance;
    char sex;

    printf("Enter total balance and sex(only first letter in capital): ");
    scanf("%f %c", &balance,&sex);

    if(balance>50000){
        if(sex=='F'){
            printf("female account \n");
            total_balance= balance+(balance*(5.0/100));
        }
        else if(sex=='M'){
            printf("male account \n");
            total_balance= balance+(balance*(2.0/100));
        }
        else{
            printf("Invalid gender\n");
        }
    }
    else if(balance<!0){
        printf("Invalid Balance \a \n");
      //total_balance= balance+(balance*(2.0/100));
    }
    else{
        printf("ami gorib\n");
        total_balance= balance+(balance*(2.0/100));
    }

printf("total_balance = %f\n",total_balance);


return 0;
}
