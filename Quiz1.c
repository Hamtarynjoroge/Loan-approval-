#include<stdio.h>

int main()
{
float principal_amount,time,rate,simple_intrest;

printf("Enter principal_amount:");
scanf("%f",&principal_amount);
printf(" The principal_amount is %f \n",principal_amount);

    printf("Enter time:");
    scanf("%f",&time);
    printf("The time is %f \n",time);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("The rate is %f \n",rate);
    
    simple_intrest=(principal_amount*time*rate)/100;
    printf("The simple_intrest is %f",simple_intrest);
    return 0;
    
}