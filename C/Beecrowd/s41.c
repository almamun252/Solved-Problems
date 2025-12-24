#include<stdio.h>
int main(){
	int n,m,tem,sum=0;

	while(1){
		sum=0;
	scanf("%d %d",&m,&n);
	if(m<1||n<1)
		break;

	if(m<n){
		tem=m;
		m=n;
		n=tem;
	}

	

	for(int i=n;i<=m;i++){
		printf("%d ",i);
		sum+=i;
	
	
	}
	printf("Sum=%d\n",sum);
    }
	return 0;
}