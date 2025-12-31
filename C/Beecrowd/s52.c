#include<stdio.h>
int main(){
	int x,z,i;
	scanf("%d",&x);
	do{
	   scanf("%d",&z);
	}while(z<=x);

	int sum=x,sum2=x+1;

	for(i=1;sum<z;i++){
		sum+=sum2;
		sum2++;
	}printf("%d\n",i);
	return 0;

}