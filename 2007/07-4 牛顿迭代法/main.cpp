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

/* 利用牛顿迭代法求某正数n的平方根*/

/*#include <iostream>
#include<math.h>
using namespace std; 

int main(int argc, char *argv[]) {
	double a,x0,x1;
	cin>>a;
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x1-x0)>1e-10){
		x0=x1;
		x1=(x0+a/x0)/2;
	}
	cout<<x1<<endl;
	return 0;
} */
