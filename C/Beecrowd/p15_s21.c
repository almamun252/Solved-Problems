#include <stdio.h>
 
int main() {
 
   int in_days,y,m,out_days;
   scanf("%d",&in_days);
   y=in_days/365;
   m=(in_days%365)/30;
   out_days=(in_days%365)%30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)",y,m,out_days);
 
   return 0;
}