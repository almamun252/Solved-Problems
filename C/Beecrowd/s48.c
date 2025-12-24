#include<stdio.h>
int main(){
	int n,bign=0,posi=0;
	for(int i=1;i<=100;i++){
		scanf("%d",&n);
		if(n>bign){
			bign=n;
			posi=i;
		}
	}
	printf("%d\n%d\n",bign,posi);
	return 0;
}