#include<iostream>
using namespace std;

double fact(int n){
	if(n==0)
		return 1;
	else
	   return n*fact(n-1);
}

int main(){
	double n,r,ncr;
	cin>>n>>r;

	ncr=fact(n)/(fact(r)*fact(n-r));

	cout<<ncr<<endl;

	return 0;
}