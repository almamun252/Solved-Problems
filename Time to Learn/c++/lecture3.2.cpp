#include<iostream>
using namespace std;

int main(){
	char c;
	while(cin>>c){

		if(c>='A' && c<='Z'){
			cout<<"Upper Case"<<endl;
		}else if(c>='a'&& c<='z'){
			cout<<"lower case"<<endl;
		}else{
			cout<<"Invalid"<<endl;
		}
	}

	return 0;
}