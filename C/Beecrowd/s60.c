#include<stdio.h>
int main(){
	long long int has_army,opp_army;
	while(scanf("%lld %lld",&has_army,&opp_army) !=EOF){
		long long int diff;

		if(has_army>opp_army)
			diff=has_army-opp_army;

		else
			diff=opp_army-has_army;

		printf("%lld\n",diff);
	}

	return 0;
}