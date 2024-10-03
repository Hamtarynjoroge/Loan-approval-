#include<stdio.h>

int main(){
int Book_ID,Due_Date,Return_Date,Days_Overdue;
printf("Enter Book_ID:");
scanf("%d",&Book_ID);

printf("Enter Due_Date:");
scanf("%d",&Due_Date);

printf("Enter Return_Date:");
scanf("%d",&Return_Date);

Days_Overdue=Return_Date-Due_Date;
printf("Days_overdue is %d  \n",Days_Overdue);

if(Days_Overdue<=7){
printf("fine rate is Ksh.20");
}
else if(Days_Overdue<=14){
    printf("fine rate is Ksh.50");
    }
    else{
    printf("fine rate is ksh.100");
    }
    return 0;
}