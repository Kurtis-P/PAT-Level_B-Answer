#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	string s;
	cin>>s;
	int sum=0;
	for(auto it=s.begin();it!=s.end();it++){
		sum+=*it-'0';
	}
	map<char,string> m;
	m['1']="yi";
	m['2']="er";
	m['3']="san";
	m['4']="si";
	m['5']="wu";
	m['6']="liu";
	m['7']="qi";
	m['8']="ba";
	m['9']="jiu";
	m['0']="ling";
	string a=to_string(sum);
	for(int i=0;i<a.length();i++){
		if(i!=0) cout<<' ';
		cout<<m[a[i]];
	}
} 
