#include<iostream>
#include<stack>
using namespace std;

int main(){
	int a,b,d;
	cin>>a>>b>>d;
	int c=a+b;
	stack<int> s;
	if(c==0){
		cout<<0;
		return 0;
	}
	while(c!=0){
		s.push(c%d);
		c=c/d;
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}
