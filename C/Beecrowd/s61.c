#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int j=0;
		float x;
		scanf("%f",&x);
		while(1<x){
			j++;
			x/=2;

		}
		printf("%d dias\n",j);
	}
	return 0;
}