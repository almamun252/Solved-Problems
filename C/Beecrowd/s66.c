#include<stdio.h>
int main(){
	int nn;
	scanf("%d",&nn);
	for(int j=0;j<nn;j++){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum-=1;
		}else{
			sum+=1;
		}
	}
	printf("%d\n",sum);
	}
	return 0;
}