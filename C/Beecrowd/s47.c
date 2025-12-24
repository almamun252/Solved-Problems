#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);


	for(int i=1;i<=y;i++){
		if(i%3==1){
			printf("%d",i);
		}else{
			printf(" %d",i);
		}

		if(i%3==0)
			printf("\n");

	}


	
	// int x,y,count=0;
	// scanf("%d %d",&x,&y);
	

	// for(int i=1;i<=y;i++){
	// 	count++;
	// 	printf("%d",i);
	// 	if(count!=x){
	// 		printf(" ");
	// 	}else{
	// 		printf("\n");
	// 		count=0;
	// 	}
		
	// }
	return 0;
}