#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;  //输入总人数
	if(n<4||n>100) {
		cout<<"非法！"<<endl;
		return 0;
	}
	int g=(n+7)/8;  //分组数
	if (g>8)  //超过8的直接分8组
		g=8;
	int num=n/g;  //每组人数
	int r=n%g;  //分组余数
	for (int i=0; i<r; i++) {  //余数均分
		cout<<num+1<<" ";
	}
	for (int j=0; j<g-r; j++) {
		cout<<num<<" ";
	}
}
