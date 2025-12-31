#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		double min_t=12.0,ct;

		for(int i=1;i<=n;i++){
			scanf("%lf",&ct);
			if(ct<min_t){
				min_t=ct;
			}
		} printf("%.2lf\n",min_t);

	}return 0;
}