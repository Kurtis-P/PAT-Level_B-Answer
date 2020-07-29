#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	if (n%1111==0){
		printf("%04d - %04d = %04d\n",n,n,0);
		return 0;
	} 
	else if(n==6174){
		cout<<"7641 - 1467 = 6174";
		return 0;
	}
	
	int a[4]={0};
	while(n!=6174){
		for(int i=0;i<4;i++){
			a[i]=n%10;
			n=n/10;
		}
		sort(a,a+4);
		int ma=0,mi=0;
		for(int i=0;i<4;i++){
			mi=mi*10+a[i];
			ma=ma*10+a[3-i];
		}
		n=ma-mi;
		printf("%04d - %04d = %04d\n",ma,mi,n);
		
	}
	return 0;
}
