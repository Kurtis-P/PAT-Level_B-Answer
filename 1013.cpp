#include<iostream>
#include<cmath>
using namespace std;

bool cal(int n){
	for(int i=2;i<=(int)sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int m,n;
	int p=0;
	cin>>m>>n;
	for(int i=2;;i++){
		if(cal(i)){
			p++;
			if(p>=m && p<=n){
				cout<<i;
				if((p-m+1)%10==0){
					cout<<endl;
				}
				else if (p<n) cout<<' ';
			}
			else if(p>n) break;
		}
	}
	return 0;
}
