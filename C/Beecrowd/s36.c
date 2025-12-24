#include<stdio.h>
int main(){
	double A,B,C,tem;
	scanf("%lf %lf %lf",&A,&B,&C);

	if(A<B){
		tem=A;
		A=B;
		B=tem;
	}

	if(A<C){
		tem=A;
		A=C;
		C=tem;
	}

	if(B<C){
		tem=B;
		B=C;
		C=tem;
	}


	if(A>=(B+C))
		printf("NAO FORMA TRIANGULO\n");
	else{

	if((A*A)==((B*B)+(C*C)))
		printf("TRIANGULO RETANGULO\n");
	else if((A*A)>((B*B)+(C*C)))
		printf("TRIANGULO OBTUSANGULO\n");
	else if((A*A)<((B*B)+(C*C)))
		printf("TRIANGULO ACUTANGULO\n");

	if((A==B)&&(B==C))
		printf("TRIANGULO EQUILATERO\n");
	else if((A==B)||(B==C)||(C==A))
		printf("TRIANGULO ISOSCELES\n");
    }

	return 0;

}