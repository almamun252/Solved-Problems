#include<iostream>
#include<vector>
using namespace std;

int main(){
	//Function of vector(size, push_back, pop_back, front, back, at)

	vector<int>vec1;

	cout<<"Before push_back Size: "<<vec1.size()<<endl;

	vec1.push_back(3);
	vec1.push_back(7);
	vec1.push_back(5);

	cout<<"After push_back Size: "<<vec1.size()<<endl;

	for(int val : vec1){
		cout<<val<<" ";
	}

	cout<<"<<\n--After pop_back-->>\n";

	vec1.pop_back();
	cout<<"Size= "<<vec1.size()<<endl;

	for(int val : vec1){
		cout<<val<<" ";
	}

	// Some optional vector funtion(front, back, at)

	cout<<"\n<<--optional finction-->>\n";

	cout<<"Using front(): "<<vec1.front()<<endl;
	cout<<"Using back(): "<<vec1.back()<<endl;
	cout<<"Using at(): "<<vec1.at(1)<<endl;

	return 0;

}