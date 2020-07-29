#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string a;
	cin>>a;
	for(int i=0;i<10;i++){
		char temp=i+'0';
		if (count(a.begin(),a.end(),temp)) printf("%d:%d\n",i,count(a.begin(),a.end(),temp));
	}
}
