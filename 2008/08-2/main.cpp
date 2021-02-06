/*
2、验证这句话：任何一个大于6的偶数都可以分解成两个素数之和。
要求：输入一个大于6的偶数，输出两个素数，其和为输入偶数，
程序一直运行，直到键盘输入-1后回车再退出。 */ 
#include <iostream>
using namespace std;

int fun(int m) {//判断是不是素数
	int t=1;  //t是标志位
	for(int i=2; i<=m/2; i++) {  //寻找m的因子
		if(m%i==0) {  //找到一个i为m的因子
			t=0;  //将标志位置为0
			break;  //跳出循环
		}
	}
	return t;  //返回t的值，t若为1，则说明m是素数，t若为0，则说明m不是素数
}

int main() {
	int n,a,b;  //n为输入的偶数，a,b为n分解出的两个素数
	cin>>n;  //输入一个偶数
	for(int a=1; a<=n/2; a++) {  
		if(fun(a)) {  //若a为素数
			b=n-a;  //将输入的偶数与a的差值赋给b
			if(fun(b)) {  //若b也为素数，则输出a,b
				cout<<a<<"  "<<b<<endl; 
			}
		}
	}
	return 0;
}