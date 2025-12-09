#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;

int main(){
	int n=23;

	cout<<bitset<16>(n)<<endl;
	cout<<hex<<n<<endl;
	cout<<oct<<n<<endl;
	printf("%x\n",n);
	printf("%o\n",n);
}