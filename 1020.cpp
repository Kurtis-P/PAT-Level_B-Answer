#include<iostream>
#include<algorithm>
using namespace std;

struct mooncake{
	double volumn,price,ppv;
};

bool cmp(mooncake a,mooncake b){
	return a.ppv>b.ppv;
}

int main(){
	int n,d;
	cin>>n>>d;
	double temp;
	mooncake m[n];
	for(int i=0;i<n;i++){
		cin>>temp;
		m[i].volumn=temp;
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		m[i].price=temp;
		m[i].ppv=m[i].price/m[i].volumn;
	}
	sort(m,m+n,cmp);
	double maxincome=0.0;
	for(int i=0;i<n;i++){
		if(d>=m[i].volumn){
			maxincome+=m[i].price;
			d-=m[i].volumn;
		}
		else{
			maxincome+=m[i].ppv*d;
			break;
		}
	}
	printf("%.2f",maxincome);
}
