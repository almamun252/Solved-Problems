#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,q;

	while(cin>>n>>q){
		vector<int>grades(n);

		for(int i=0; i<n; i++){
			cin>>grades[i];
		}

		sort(grades.begin(),grades.end(),greater<int>());

		for(int i=0; i<q; i++){
			int position;
			cin>>position;

			cout<<grades[position-1]<<endl;
		}
	}

	return 0;
}