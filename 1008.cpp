#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int nums[n];
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int temp;
	m=m%n;
	if (m!=0){
		reverse(nums,nums+n);
		reverse(nums,nums+m);
		reverse(nums+m,nums+n);
	}
	for(int i=0;i<n-1;i++){
		cout<<nums[i]<<' ';
	}
	cout<<nums[n-1];
	return 0;
}

/*
һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M��M>=0����λ�ã�����A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����

�����ʽ��

ÿ���������һ��������������1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���

�����ʽ��

��һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�

����������
6 2
1 2 3 4 5 6

���������
5 6 1 2 3 4 

���������鳤��Ϊn��Ҫ�������ѭ������mλ��ֻ��Ҫ�Ƚ���������a���ã��ٽ�����ǰmλ���ã���������n-mλ���ü������ѭ������mλ��reverse��������ʵ�ֽ�һ���������vector��Ԫ�ص��ã����������algorithmͷ�ļ��С������m����n����ôѭ������mλ�൱��ѭ������m%nλ����Ϊ��Щn����λ���ƶ��Ƕ���ģ�������ʹ��m֮ǰ���Ƚ�m = m%n��

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    m %= n;
    if (m != 0) {
        reverse(begin(a), begin(a) + n);
        reverse(begin(a), begin(a) + m);
        reverse(begin(a) + m, begin(a) + n);
    }
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;
}
*/
