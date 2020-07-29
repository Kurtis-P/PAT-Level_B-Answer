#include<iostream>
using namespace std;

int main(){
	int a[10];
	int min=10;
	for (int i=0;i<10;i++){
		cin>>a[i];
		if(i!=0 && a[i]!=0 &&i<min) {
			cout<<i;
			a[i]-=1;
			min=i;
		}
	}
	for(int i=0;i<10;i++){
		while(a[i]!=0){
			cout<<i;
			a[i]-=1;
		}
	}
	return 0;
}
