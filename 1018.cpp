#include<iostream>
#include<string>
#include<map>
using namespace std;

char max(int a,int b,int c){
	int t=a>=b?a:b;
	t=t>=c?t:c;
	if(a==t) return 'B';
	else if(b==t) return 'C';
	else return 'J';
}

int main(){
	int n;
	cin>>n;
	int js=0,ys=0;
	int jj=0,jb=0,jc=0,yj=0,yb=0,yc=0;
	map<string,int> m;
	m["J B"]=11;
	m["B C"]=12;
	m["C J"]=13;
	m["B J"]=21;
	m["C B"]=22;
	m["J C"]=23;
	m["J J"]=0;
	m["B B"]=0;
	m["C C"]=0;
	for(int i=0;i<=n;i++){
		string temp;
		getline(cin,temp);
		switch(m[temp])
		{
			case 11:js++;jj++;break;
			case 12:js++;jb++;break;
			case 13:js++;jc++;break;
			case 21:ys++;yj++;break;
			case 22:ys++;yb++;break;
			case 23:ys++;yc++;break;
		}
	}
	cout<<js<<' '<<n-js-ys<<' '<<ys<<endl;
	cout<<ys<<' '<<n-js-ys<<' '<<js<<endl;
	cout<<max(jb,jc,jj)<<' '<<max(yb,yc,yj);
}
