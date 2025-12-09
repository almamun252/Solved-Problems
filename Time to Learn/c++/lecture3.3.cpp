#include<iostream>
using namespace std;

int main(){
	int n,m,sum=0;
	cin>>m>>n;

	for(int i=m;i<=n;i++){
		sum+=i;
	}

	cout<<sum<<endl;

	return 0;
}