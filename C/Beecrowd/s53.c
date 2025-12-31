#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x,flag=1;
		scanf("%d",&x);

		if(x<=1){
			printf("%d nao eh primo\n",x);
		}else{
			for(int j=2;j*j<=x;j++){
				if(x%j==0){
					flag=0;
					break;
				}
			}

			if(flag==0)
				printf("%d nao eh primo\n",x);
			else
				printf("%d eh primo\n",x);
		}
	}
	return 0;
}