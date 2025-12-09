#include<iostream>
#include<climits>
using namespace std;

int min(int n, int arr[]){
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}

	return min;
}

int max(int n,int arr[]){
	int max=INT_MIN;

	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}

	return max;
}

void inputarr(int n,int arr[]){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	inputarr(n,arr);

	cout<<"\nMin number:\n"<<min(n,arr)<<endl;

	cout<<"\nmax value:\n"<<max(n,arr)<<endl;

	return 0;
}