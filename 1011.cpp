#include<iostream>
using namespace std;

int main(){
	int nums;
	cin>>nums;
	long long int a,b,c;
	for(int i=0;i<nums;i++){
		cin>>a>>b>>c;
		if(a+b>c){
			cout<<"Case #"<<i+1<<": true"<<endl;
		}
		else{
			cout<<"Case #"<<i+1<<": false"<<endl;
		}
	} 
	return 0;
}
