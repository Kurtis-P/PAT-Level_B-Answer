#include<iostream>
#include<string>
using namespace std;

int main(){
	int times;
	cin>>times;
	string temp_name,temp_id;
	string max_name,max_id;
	string min_name,min_id;
	int max_score=-1,min_score=101;
	int temp_score;
	for(int i=0;i<times;i++){
		cin>>temp_name>>temp_id>>temp_score;
		if (temp_score>max_score){
			max_name=temp_name;
			max_id=temp_id;
			max_score=temp_score;
		}
		if (temp_score<min_score){
			min_name=temp_name;
			min_id=temp_id;
			min_score=temp_score;
		}
	}
	cout<<max_name<<' '<<max_id<<endl<<min_name<<' '<<min_id;
}


