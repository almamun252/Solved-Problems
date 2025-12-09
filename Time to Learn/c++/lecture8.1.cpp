#include<iostream>
#include<climits>
using namespace std;

void input_arr(int n, int arr[]){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int main(){
	int n,sm_value=INT_MAX,big_value=INT_MIN;
	cin>>n;
	int arr[n];

	input_arr(n,arr);

	for(int i=0;i<n;i++){
	    sm_value=min(arr[i],sm_value);
	    big_value=max(arr[i],big_value);
    }

	cout<<"\nSmall Value:"<<sm_value<<endl;
	cout<<"Big value: "<<big_value<<endl;

	return 0;
}