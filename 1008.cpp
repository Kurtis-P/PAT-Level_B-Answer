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
一个数组A中存有N（N>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（M>=0）个位置，即将A中的数据由（A0 A1……AN-1）变换为（AN-M …… AN-1 A0 A1……AN-M-1）（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

输入格式：

每个输入包含一个测试用例，第1行输入N ( 1<=N<=100)、M（M>=0）；第2行输入N个整数，之间用空格分隔。

输出格式：

在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例：
6 2
1 2 3 4 5 6

输出样例：
5 6 1 2 3 4 

分析：数组长度为n，要想把数组循环右移m位，只需要先将整个数组a倒置，再将数组前m位倒置，最后将数组后n-m位倒置即可完成循环右移m位～reverse函数可以实现将一个数组或者vector中元素倒置，这个函数在algorithm头文件中～（如果m大于n，那么循环右移m位相当于循环右移m%n位，因为那些n倍数位的移动是多余的，所以在使用m之前，先将m = m%n）

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
