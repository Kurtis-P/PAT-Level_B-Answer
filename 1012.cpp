#include<iostream>
using namespace std;

int main(){
	int nums;
	cin>>nums;
	int a1=0,a21=0,a22=1,a3=0,a41=0,a42=0,a5=0,temp;
	int flag[5]={0};
	for(int i=0;i<nums;i++){
		cin>>temp;
		if(temp%10==0) {
			a1+=temp;
			flag[0]=1;
		}
		else if(temp%5==1) {
			a21+=a22*temp;
			a22=-1*a22;
			flag[1]=1;
		}
		else if(temp%5==2) {
			a3++;
			flag[2]=1;
		}
		else if(temp%5==3) {
			a41+=temp;
			a42++;
			flag[3]=1;
		}
		else if(temp%5==4 && temp>a5) {
			a5=temp;
			flag[4]=1;
		}
	}
	if(flag[0]==1) cout<<a1<<' '; else cout<<'N'<<' ';
	if(flag[1]==1) cout<<a21<<' '; else cout<<'N'<<' ';
	if(flag[2]==1) cout<<a3<<' ';  else cout<<'N'<<' ';
	if(flag[3]==1) printf("%.1f ",(double)a41/a42); else cout<<'N'<<' ';
	if(flag[4]==1) cout<<a5; else cout<<'N';
}
