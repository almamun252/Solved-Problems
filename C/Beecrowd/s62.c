#include<stdio.h>
int main(){
	int n,f1=0,f2=1,tem;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n==i)
			printf("%d",f1);
		else
			printf("%d ",f1);
		tem=f1;
		f1=f2;
		f2+=tem;
	}printf("\n");
	return 0;
}