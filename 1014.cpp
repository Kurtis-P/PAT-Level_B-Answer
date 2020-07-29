#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int len1=s1.length()<s2.length()?s1.length():s2.length();
	int len2=s3.length()<s4.length()?s3.length():s4.length();
	char c1,c2;
	int c3;
	int i=0;
	for(;i<len1;i++){
		if(s1[i]==s2[i] && s1[i]>='A' && s1[i]<='G'){
			c1=s1[i];
			break;
		}
	}
	for(i++;i<len1;i++){
		if(s1[i]==s2[i] && (isdigit(s1[i]) || (s1[i]>='A' && s1[i]<='N'))){
			c2=s1[i];
			break;
		}
	}
	for(int i=0;i<len2;i++){
		if(s3[i]==s4[i] && isalpha(s3[i])){
			c3=i;
			break;
		}
	}
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cout<<week[c1-'A']<<' ';
	if(isalpha(c2)){
		printf("%02d:",c2-'A'+10);
	}
	else{
		printf("%02d:",c2-'0');
	}
	printf("%02d",c3);
}
