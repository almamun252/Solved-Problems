#include <stdio.h>
 
int main() {
 int prod1_cod,prod1_unit;
 float pri_prod1,pri_prod2,total_pri_prod1,total_pri_prod2,total_payment;
 scanf("%d %d %f",&prod1_cod,&prod1_unit,&pri_prod1);
 
 int prod2_cod,prod2_unit;
 scanf("%d %d %f",&prod2_cod,&prod2_unit,&pri_prod2);
 total_pri_prod1=prod1_unit*pri_prod1;
 total_pri_prod2=prod2_unit*pri_prod2;
 
 total_payment=total_pri_prod1+total_pri_prod2;
 
 printf("VALOR A PAGAR: R$ %.2f\n",total_payment);
 
 return 0;
}