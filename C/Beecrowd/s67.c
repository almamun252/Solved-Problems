#include<stdio.h>
int main(){
	int n,x,y,area;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		area=0.5*(x*y);
		printf("%d cm2\n",area);
	}
	return 0;
}