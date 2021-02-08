#include <iostream>
#include<stack> 
using namespace std; 
/*1、输入任意一个十进制整数，转换为二进制数串显示出来。*/
int main() {
	stack<int> s;  //建栈
	int n;
	cin>>n;  //输入一个十进制数
	while(n!=0){
		s.push(n%2);  //将余数存入栈中
		n/=2;
	}
	while(s.empty()!=true){
		cout<<s.top();  //输出栈顶元素
		s.pop();  //将栈顶元素弹出
	}
	return 0;
}
