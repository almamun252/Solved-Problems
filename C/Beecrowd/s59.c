#include<stdio.h>
int main(){
	int n,qt,s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&qt,&s);
		int guess,diff,min_diff=101,win_pos=0;
		for(int j=1;j<=qt;j++){
			scanf("%d",&guess);
			if(guess>s)
				diff=guess-s;
			else
				diff=s-guess;

			if(diff<min_diff){
				min_diff=diff;
				win_pos=j;
			}
		}printf("%d\n",win_pos);
	}
	return 0;
}