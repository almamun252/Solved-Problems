#include<stdio.h>
int main(){
	int n,t,p=1,minhit=20;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		if(minhit>t){
			minhit=t;
			p=i;
		}
	}
	printf("%d\n",p);
	return 0;
}