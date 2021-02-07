#include <iostream>
using namespace std; 
int a[10000]={0,1};
int main() {
	int t=2,n;
	for(int i=2;i<1000;i++){
		//把符合条件的数按顺序存入数组a中
		if(i%2==0||i%3==0||i%5==0)
			a[t++]=i;
	}
	cin>>n;  //输入想要返回哪个位置上的数字
	cout<<a[n];  //输出该位置对应的数字
	return 0;
}
