#include<stdio.h>
int main(){
	int n,value;
	while(scanf("%d",&n)&& n!=0){
	for(int j=0;j<n;j++){
		int ans,count=0;
	for(int i=0;i<5;i++){ 
		scanf("%d",&value);
		if(value<=127){
			ans=i;
			count++;
		}
	}
	if(count==1){
		printf("%c\n",ans+'A');
	}
	else
		printf("*\n");
	}
	}
	return 0;
}