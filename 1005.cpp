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
卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。
当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。
现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。

输入格式：

每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

输出格式：

每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用1个空格隔开，但一行中最后一个数字后没有空格。

输入样例：

6
3 5 6 7 8 11

输出样例：

7 6

分析：对每一个输入的数字n进行验证，把验证过的数字对应的arr标记为1，然后对这些输入的数字从大到小排序，输出所有arr=0的数字即为关键数字～ 

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
