#include<stdio.h>
int main(){
	int cd_no[5];
	for(int i=0;i<5;i++){
		scanf("%d",&cd_no[i]);
	}

	if(cd_no[0]<cd_no[1] && cd_no[1]<cd_no[2] && cd_no[2]<cd_no[3] && cd_no[3]<cd_no[4]){
		printf("C");
	}else if(cd_no[0]>cd_no[1]&& cd_no[1]>cd_no[2] && cd_no[2]>cd_no[3] && cd_no[3]>cd_no[4]){
		printf("D");
	}else{
		printf("N");
	}
	return 0;

}