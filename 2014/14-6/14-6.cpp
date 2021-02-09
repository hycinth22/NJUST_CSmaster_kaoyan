#include <iostream>
#include<math.h>
#define N 3  //修改N的值输出不同的花朵数
using namespace std; 

int getP(int x,int y){
	if(y==0) return 1;
	else return getP(x,y-1)*x;  //递归求x的y次方
}  

int getWei(int n,int *s){
	int num=0;  //记录十进制整数的位数，初始化为0
	int m=n;  //将十进制整数n赋给m
	while(m)  //统计m的位数
	{
		num++;
		m/=10;
	}
	int index=num-1;  //初始化数组s的下标
	while (n)  //将n的每位数字按次序存放到数组s中
	{
		s[index--]=n%10;
		n/=10;
	}
	return num;  //返回整数的位数
}

int main() {
	int s[N];
	int count=0;  //记录花朵数，初始化为0
	for (int i=getP(10,N-1);i<getP(10,N);i++)
	{
		getWei(i,s);  //调用getWei函数得到修改后的数组s
		int sum=0;
		for (int j=0;j<N;j++)  //计算各位次方之和
			sum+=getP(s[j],N);
		if (sum==i)  //判断i的每位数字的N次方之和是否等于这个数本身
		{
			cout<<sum<<endl;  //若相等，则输出
			count++;  //花朵数加一
		}	
	}
	cout<<count<<endl;  //输出花朵数
}
