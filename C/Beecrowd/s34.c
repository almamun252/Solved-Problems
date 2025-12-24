#include<stdio.h>
int main(){
	float n1,n2,n3,n4,n5,wavg,newavg;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	wavg=((n1*2)+(n2*3)+(n3*4)+n4)/10;

	if(wavg>=7.0){
		printf("Media: %.1f\n",wavg);
		printf("Aluno aprovado.\n");
	}
	else if(wavg<5.0){
		printf("Media: %.1f\n",wavg);
		printf("Aluno reprovado.\n");
	}
	else{
		printf("Media: %.1f\n",wavg);
		printf("Aluno em exame.\n");
		scanf("%f",&n5);
		printf("Nota do exame: %.1f\n",n5);
		

		newavg=(wavg+n5)/2;

		if(newavg>=5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",newavg);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",newavg);
		}
	}
	return 0;

}