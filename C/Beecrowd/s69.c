#include<stdio.h>
int main(){
	int m,n,diff;
	int bill[6]={2,5,10,20,50,100};
	while(scanf("%d %d",&m,&n)&&((m!=0)&&(n!=0))){
		int flag=0;
		diff=n-m;
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(bill[i]+bill[j]==diff){
					flag=1;
					break;
				}
			}

			if(flag)
				break;
		}
		if(flag)
			printf("possible\n");
		else
			printf("impossible\n");
	}
	return 0;
}