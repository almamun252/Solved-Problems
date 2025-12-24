#include<stdio.h>
int main(){
	while(1){
		int n,a,b,ca=0,cb=0;
		scanf("%d",&n);
		if(n>0){
			for(int i=1;i<=n;i++){
				scanf("%d %d",&a,&b);
				if(a>b)
					ca++;
				else if(b>a)
					cb++;

			}
		}else{
			break;
		}
		printf("%d %d\n",ca,cb);
	}
	return 0;
}