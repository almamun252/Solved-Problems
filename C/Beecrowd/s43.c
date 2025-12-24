#include<stdio.h>
int main(){
	double I,J;
	for(int i=0;i<=20;i+=2){
		I=i/10.0;
		for(int j=1;j<=3;j++){
			J=I+j;

			if(i%10==0)
				printf("I=%.0lf J=%.0lf\n",I,J);
			else
				printf("I=%.01lf J=%.01lf\n",I,J);
		}
	}
	return 0;
}
