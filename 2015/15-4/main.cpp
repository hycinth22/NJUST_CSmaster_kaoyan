/* 十进制加法形式为s=a+aa+aaa+...,n个正整数相加，输入a（1到9）和n（1到9），输出求和值s。
例1：若a=1,n=1,则s=1；
例2：若a=1,n=2,则s=1+11=12
例3：若a=2,n=3,则s=2+22+222=246*/
#include <iostream>
using namespace std; 

int main() {
	int m,n,sum,s;  //m为整数，n为项数，sum为最后的结果，s为算式的项
	cin>>m>>n;  //输入m,n
	s=m; sum=m;  //初始化
	for(int i=1;i<n;i++){  //循环计算各项的和
		s=s*10+m;
		sum+=s;
	}
	cout<<sum<<endl;  //输出总和
	return 0;
}
