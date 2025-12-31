#include<stdio.h>
int main(){
	int x=0;
	while(x!=2){
		double sum=0,sc;
		int count=0;
		while(1){
			scanf("%lf",&sc);
			if (sc>=0 && sc<=10){
				sum+=sc;
				count++;
				
			}else{
				printf("nota invalida\n");
			}
			if(count==2)
				break;
		}
		sum/=2;
		printf("media = %.2lf\n",sum);

		while(1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&x);
			if(x==1||x==2)
				break;
		}
	}
	return 0;
}