#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

struct stu{
	int id;
	int de;
	int cai;
};

bool cmp(stu a,stu b){
	if((a.de+a.cai)!=(b.de+b.cai)) return (a.de+a.cai)>(b.de+b.cai);
	else if(a.de!=b.de) return a.de>b.de;
	else return a.id<b.id;
}

int main(){
	int m,l,h;
	cin>>m>>l>>h;
	stu s1[m],s2[m],s3[m],s4[m];
	int count1=0,count2=0,count3=0,count4=0;
	for(int i=0;i<m;i++){
		int id, de,cai;
		cin>>id>>de>>cai;
		if(de>=h &&cai>=h) {
			s1[count1].id=id;
			s1[count1].de=de;
			s1[count1].cai=cai;
			count1++;
		}
		else if(de>=h && cai>=l && cai<h){
			s2[count2].id=id;
			s2[count2].de=de;
			s2[count2].cai=cai;
			count2++;
		}
		else if(de>=l && de<h && de>=cai && cai>=l){
			s3[count3].id=id;
			s3[count3].de=de;
			s3[count3].cai=cai;
			count3++;
		}
		else if(de>=l && cai>=l){
			s4[count4].id=id;
			s4[count4].de=de;
			s4[count4].cai=cai;
			count4++;
		}
	}
	sort(s1,s1+count1,cmp);
	sort(s2,s2+count2,cmp);
	sort(s3,s3+count3,cmp);
	sort(s4,s4+count4,cmp);
	
	cout<<count1+count2+count3+count4<<endl;
	
	for(int i=0;i<count1;i++){
		printf("%d %d %d\n",s1[i].id,s1[i].de,s1[i].cai);
	}
	
	for(int i=0;i<count2;i++){
		printf("%d %d %d\n",s2[i].id,s2[i].de,s2[i].cai);
	}
	
	for(int i=0;i<count3;i++){
		printf("%d %d %d\n",s3[i].id,s3[i].de,s3[i].cai);
	}
	
	for(int i=0;i<count4;i++){
		printf("%d %d %d\n",s4[i].id,s4[i].de,s4[i].cai);
	}
	return 0;
}

