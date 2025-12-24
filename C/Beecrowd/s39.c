#include<stdio.h>
int main(){
	int n,x;
	scanf("%d",&x);

	for(int i=0;i<x;i++){
	scanf("%d",&n);

	if(0<n){
		if(n%2==0)
			printf("EVEN ");
		else
			printf("ODD ");

		printf("POSITIVE\n");

	}else if(0>n){
	    if(n%2==0)
	    	printf("EVEN ");
	    else
	    	printf("ODD ");

	    printf("NEGATIVE\n");
	}else{
		printf("NULL\n");
	}
    
    }
    
    return 0;
}