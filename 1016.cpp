#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string a,b;
	char da,db;
	int pa,pb;
	cin>>a>>da>>b>>db;
	pa=count(a.begin(),a.end(),da);
	pb=count(b.begin(),b.end(),db);
	if(pa!=0){
		int n=pa;
		pa=da-'0';
		for(int i=0;i<n-1;i++){
			pa=pa*10+pa%10;
		}
	}
	if(pb!=0){
		int n=pb;
		pb=db-'0';
		for(int i=0;i<n-1;i++){
			pb=pb*10+pb%10;
		}
	}
	cout<<pa+pb;
	return 0;
}
