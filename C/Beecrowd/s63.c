#include<stdio.h>
int main(){
	int m,n;
	while(scanf("%d %d",&n,&m)!=EOF){
	
	long long fac_n=1,fac_m=1,sum;
	for(int i=2;i<=n;i++){
		fac_n*=i;
	}
	for(int i=2;i<=m;i++){
		fac_m*=i;
	}
	sum=fac_n+fac_m;
	printf("%lld\n",sum);
	}
	return 0;
}