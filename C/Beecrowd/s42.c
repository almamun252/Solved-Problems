#include<stdio.h>
int main(){
	int x,y,tem;
	scanf("%d %d",&x,&y);
	if(y>x){
		tem=x;
		x=y;
		y=tem;
	}

	for(int i=y+1;i<x;i++){
		if(((i%5)==2)||((i%5)==3)){
			printf("%d\n",i);
		}
	}
	return 0;
}