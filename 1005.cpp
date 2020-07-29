#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int,int,greater<int>> numbers;
	int k;
	cin>>k;
	int temp;
	for(int i=0;i<k;i++){
		cin>>temp;
		numbers[temp]=1;
	}

	for(auto it=numbers.begin();it!=numbers.end();it++){
		int num=it->first;
		if(it->second!=-1){
			while(num!=1){
				if(num%2==0){
					num=num/2;
				}
				else{
					num=(3*num+1)/2;
				}
				auto iter=numbers.find(num);
				if(iter!=numbers.end()){
					numbers[iter->first]=-1;
				}
			}
		}
	}
	int key=0;
	for(auto it=numbers.begin();it!=numbers.end();it++){
		if(it->second!=-1){
			if(key==1) cout<<' '<<it->first;
			else{
				cout<<it->first;
				key=1;
			}
		}
	}
}

/*
������(Callatz)�����Ѿ���1001�и������������������Ŀ������΢��Щ���ӡ�
��������֤�����Ȳ����ʱ��Ϊ�˱����ظ����㣬���Լ�¼�µ��ƹ�����������ÿһ�����������n=3������֤��ʱ��������Ҫ����3��5��8��4��2��1�������Ƕ�n=5��8��4��2������֤��ʱ�򣬾Ϳ���ֱ���ж������Ȳ������α��������Ҫ�ظ����㣬��Ϊ��4�����Ѿ�����֤3��ʱ���������ˣ����ǳ�5��8��4��2�Ǳ�3�����ǡ����������ǳ�һ�������е�ĳ����nΪ���ؼ����������n���ܱ������е��������������ǡ�
���ڸ���һϵ�д���֤�����֣�����ֻ��Ҫ��֤���еļ����ؼ������Ϳ��Բ������ظ���֤���µ����֡������������ҳ���Щ�ؼ����֣������Ӵ�С��˳��������ǡ�

�����ʽ��

ÿ�������������1��������������1�и���һ��������K(<100)����2�и���K��������ͬ�Ĵ���֤��������n(1<n<=100)��ֵ�����ּ��ÿո������

�����ʽ��

ÿ���������������ռһ�У����Ӵ�С��˳������ؼ����֡����ּ���1���ո��������һ�������һ�����ֺ�û�пո�

����������

6
3 5 6 7 8 11

���������

7 6

��������ÿһ�����������n������֤������֤�������ֶ�Ӧ��arr���Ϊ1��Ȼ�����Щ��������ִӴ�С�����������arr=0�����ּ�Ϊ�ؼ����֡� 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];
bool cmp(int a, int b) {return a > b;}
int main() {
    int k, n, flag = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2 != 0) n = 3 * n + 1;
            n = n / 2;
            if (arr[n] == 1) break;
            arr[n] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        if (arr[v[i]] == 0) {
            if (flag == 1) cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}

*/