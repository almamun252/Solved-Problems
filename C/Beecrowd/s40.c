#include<stdio.h>
int main(){
	int x,y,tem,sum=0;
	scanf("%d %d",&x,&y);

	if(x<y){
		tem=x;
		x=y;
		y=tem;
	}

	for(int i=y+1;i<x;i++){
		if((i%2)!=0){
			sum+=i;
		}
	}
	printf("%d\n",sum);

	return 0;
}