#include<iostream>
#include<vector>
using namespace std;

vector<int>pairsum(vector<int>numbs,int target){
	vector<int>ans;
	int n=numbs.size();
	int i=0,j=n-1;

	while(i<j){
	  int pairsum = numbs[i]+numbs[j];
	  if(pairsum>target){
	  	 j--;
	  } else if(pairsum<target){
	  	 i++;
	  } else{
	  	 ans.push_back(i);
	  	 ans.push_back(j);
	  	 return ans;
	  }
	}

	return ans;
}


int main(){
	int target=11;
	vector<int>numbs={1,2,3,4,5,6,7,8};

	vector<int>ans= pairsum(numbs,target);
	cout<<ans[0]<<" "<<ans[1]<<endl;

	return 0;	

}