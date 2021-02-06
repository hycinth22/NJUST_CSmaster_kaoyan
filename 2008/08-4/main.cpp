/*4、写一段满足下列条件的程序：输入一个数n和m，把低m位移到高位并输出。
例：123789 3，回车后输出789123.（不允许用数组实现）*/ 
#include <iostream>
#include<math.h>
int a[100];
using namespace std;

int main() {
	int n,m,t;
	int a,b,c;
	cin>>n>>m;  //输入n,m
	t=pow(10,m);  // 10的m次方 
	a=n/t;  //高位
	b=n%t;  //低位
	c=int(log10(a))+1;  //高位的位数 
	b=b*pow(10,c)+a;  //移位
	cout<<b;  //输出结果
	return 0;
}
/******************华丽分割线**************太麻烦********拜拜***********/	 
//	int n,m,sum=0;
//	cin>>n>>m;
//	int t=n;
//	for(int i=0;i<m;i++){
//		a[i]=t%10;
//		t/=10;
//	}
//	int u=int(log10(n));
//	for(int i=m-1;i>=0;i--){
//		for(int j=u;j>0;j--){
//			a[i]*=10;
//		}
//		u--;
//		sum+=a[i];
//	}
//	sum+=t;
//	cout<<sum;

