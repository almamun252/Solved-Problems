#include<stdio.h>
#include<math.h>
int main(){
	double A,B,C,R1,R2;
	scanf("%lf %lf %lf",&A,&B,&C);
	double inter=(B*B)-(4*A*C);
	if(inter>0 && A!=0){
		R1=((-1.0*B)+sqrt(inter))/(2*A);
		R2=((-1.0*B)-sqrt(inter))/(2*A);
		printf("R1 = %.5lf\n",R1);
		printf("R2 = %.5lf\n",R2);

	}else
	 printf("Impossivel calcular\n");
	 return 0;
}