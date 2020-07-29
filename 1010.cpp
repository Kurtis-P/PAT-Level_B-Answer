#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> s;
	int temp;
	while(cin>>temp) s.push(temp);
	int a,b;
	a=s.front();
	s.pop();
	b=s.front();
	s.pop();
	if(b==0){
		cout<<"0 0";
	}
	else{
		cout<<a*b<<' '<<b-1;
		a=s.front();
		s.pop();
		b=s.front();
		s.pop();
		while(b!=0 &&(!s.empty())){
			cout<<' '<<a*b<<' '<<b-1;
			a=s.front();
			s.pop();
			b=s.front();
			s.pop();
		}
	}
	return 0;
}
