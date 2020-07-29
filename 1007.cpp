#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int m;
	cin>>m;
	int old_=2;
	int nums=0;
	int new_;
	for(int i=3;i<=m;i+=2){
		int key=1;
		
		for(int j=3;j<=(int)sqrt(i);j++){
			if (i%j==0) {
				key=0;
				break;
			}
		}
		
		if(key==1){
			new_=i;
			if(new_-old_==2) nums++;
			old_=new_;
		}
	}
	cout<<nums;
}
