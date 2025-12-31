#include<stdio.h>
int main(){
	int n,casee=1;
	while(scanf("%d",&n)!=EOF){
		int quan=1+(n*(n+1))/2;
		if(n==0){
		    printf("Caso %d: %d numero\n",casee,quan);
	    }
	    else{
	    	printf("Caso %d: %d numeros\n",casee,quan);
	    }
	    printf("0");

	    for(int i=1;i<=n;i++){
	    	for(int j=0;j<i;j++){
	    		printf(" %d",i);
	    	}
	    }
	    printf("\n\n");
	    casee++;

	}
	
	return 0;
}