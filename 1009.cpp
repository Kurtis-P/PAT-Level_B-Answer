#include<iostream>
#include<stack>
#include<string>
using namespace std;
/*
int main(){
	stack<string> ss;
	string s;
	while(cin>>s) ss.push(s);
	cout<<ss.top();
	ss.pop();
	while(!ss.empty()){
		cout<<' '<<ss.top();
		ss.pop();
	}
	return 0;
}*/

int main(){
	stack<string> ss;
	string s;
	getline(cin,s);
	int pos=0;
	int len=s.length();
	while(pos<len){
		int find_pos=s.find(" ",pos);
		if (find_pos<0){
			ss.push(s.substr(pos,len-pos));
			break;
		}
		ss.push(s.substr(pos,find_pos-pos));
		pos=find_pos+1;
	}
	cout<<ss.top();
	ss.pop();
	while(!ss.empty()){
		cout<<' '<<ss.top();
		ss.pop();
	}
	return 0;
}
