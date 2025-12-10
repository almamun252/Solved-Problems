#include <stdio.h>
 
int main() {
 int emp,w_h;
 float pph,sal;
 scanf("%d %d %f",&emp,&w_h,&pph);
 sal=pph*w_h;
 printf("NUMBER = %d\nSALARY = U$ %.2f",emp,sal);
 return 0;
}