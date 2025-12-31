#include<stdio.h>
int main(){
	int n,amount,total=0,c=0,r=0,s=0;
	char type;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %c",&amount,&type);
		if(type=='C')
			c+=amount;
		else if(type=='R')
			r+=amount;
		else if(type=='S')
			s+=amount;

		total+=amount;
	}

	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",c);
	printf("Total de ratos: %d\n",r);
	printf("Total de sapos: %d\n",s);

	printf("Percentual de coelhos: %.2f %%\n",100*(c/(float)total));
	printf("Percentual de ratos: %.2f %%\n",100*(r/(float)total));
	printf("Percentual de sapos: %.2f %%\n",100*(s/(float)total));

	return 0;
}