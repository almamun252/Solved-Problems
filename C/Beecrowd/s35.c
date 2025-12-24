#include<stdio.h>
int main(){
	int L,C,value;
	scanf("%d %d",&L,&C);
	if(((L+C)%2)==0){
		value=1;
		printf("%d\n",value);
	}else{
		value=0;
		printf("%d\n",value);
	}
	return 0;
}