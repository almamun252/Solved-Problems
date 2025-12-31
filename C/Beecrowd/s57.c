#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
	// scanf("%d",&n);
		int flag=1;
		if(n<=1)
			flag=0;

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
int newn=n;
	if(flag!=0){
		int digit,indg=0,count=0;
		while(newn>0){
			int nflag=1;
			digit=newn%10;
			if(digit<=1)
				nflag=0;
			for(int i=2;i*i<=digit;i++){
				if(digit%i==0){
					nflag=0;
					break;
				}		
			}
			if(nflag!=0)
					count++;
			indg++;

			newn/=10;
		}
		if(indg==count)
			printf("Super\n");
		else
			printf("Primo\n");
	}else{
			printf("Nada\n");
	}
	
}
return 0;
}