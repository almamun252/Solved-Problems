#include<iostream>
using namespace std;

int main(){
	int arr[]={3,6,4,7,5,3,5,7};

	for(int i=0,j=7;i<4;i++,j--){
		swap(arr[i],arr[j]);
	}

	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}