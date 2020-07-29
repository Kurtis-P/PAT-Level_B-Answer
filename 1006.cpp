#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>99){
		int temp=n/100;
		for(int i=0;i<temp;i++) cout<<'B';
	}
	if(n>9){
		int temp=(n%100)/10;
		for(int i=0;i<temp;i++) cout<<'S';
	}
	for(int i=1;i<=n%10;i++){
		cout<<i;
	}
}
