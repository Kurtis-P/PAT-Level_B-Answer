#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	int b;
	cin>>a;
	cin>>b;
	int temp=0;
	int key=0;
	for(int i=0;i<a.length();i++){
		int chushu=temp*10+a[i]-'0';
		temp=chushu%b;
		chushu-=temp;
		if(key!=1) key=chushu/b==0?0:1;
		if(key==1) cout<<chushu/b;
	}
	if(key==0) cout<<0;
	cout<<' '<<temp;
	return 0;
}
