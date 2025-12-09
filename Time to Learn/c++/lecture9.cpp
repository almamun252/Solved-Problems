#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int>vec){
	for(int i=0;i<(int)vec.size();i++){
		cout<<vec[i]<<" ";
	}
}

void printvec_new(vector<int>vec){
	for(int val : vec){ //for each loop
		cout<<val<<" ";
	}
}

int main(){
	vector<int>vec1;
	vector<int>vec2={9,4,8,5,3};
	vector<int>vec3(8,3);

	printvec(vec3);
	cout<<"\n";
	printvec_new(vec2);

	

	return 0;
}