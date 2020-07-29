#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	string a;
	cin>>a;
	int len=a.length();
	
	if(a[0]=='-') cout<<a[0];
	
	string num;
	num=a[1];
	
	int yxsz=1;
	int i=3;
	while(a[i]!='E'){
		num+=a[i];
		yxsz++;
		i++;
	}
	
	i++;
	int sym=(a[i]=='+')?1:-1;
	int p=0;
	i++;
	while(i<len){
		p=p*10+(a[i]-'0');
		i++;
	}
	p=p*sym;
	
	if(p>=0){
		if(yxsz-1<=p){
			cout<<num;
			for(int j=yxsz-1;j<p;j++){
				cout<<0;
			}
		}
		else{
			cout<<num.substr(0,p+1)<<'.'<<num.substr(p+1,num.length());
		}
	}
	else{
		printf("0.");
		p=-1-p;
		while(p!=0){
			cout<<0;
			p--;
		}
		cout<<num;
	}
} 
