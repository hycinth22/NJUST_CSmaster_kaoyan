/*
用数值迭代法求一个正数的平方根，此数由键盘输入，
满足前后两次结果数之差小于0.00001. 
*/ 
#include <iostream>
#include<math.h>
using namespace std; 
int main(){
	double a,xn,xn1;
	cin>>a;
	xn=a/2;  //将xn初始化为中间的数 
	xn1=(xn+a/xn)/2;  //迭代公式X(n+1)=(Xn+a/Xn)/2 
	while(fabs(xn-xn1)>1e-10){  //迭代循环，直到连续两次算出的Xn和X（n+1）的差的绝对值小于某个值，即认为找到了精确的平方根
		xn=xn1;
		xn1=(xn+a/xn)/2;
	}
	cout<<xn1;  //输出平方根
	return 0;	
}
