#include<iostream>
#include<string.h>
using namespace std;

void convert(int n,char a[]) {  //将十进制转换成16进制的函数
	int i=0,temp;  //i为数组a的下标，temp为整数每次除以16的余数
	while(n!=0) {  //循环体
		temp=n%16;  
		if(temp>9) {  //当余数大于9时，余数应使用“A~F”表示
			a[i]=temp-10+'A';  //将字母存入数组a
		} else
			a[i]='0'+temp;  //将余数数字存入数组a
		i++;  //下标加一
		n=n/16; 
	}
	a[i]='\0';
}

int main() {
	int n;
	char a[100];
	cin>>n;  //输入整数n
	convert(n,a);  //调用转换函数
	for(int i=strlen(a)-1; i>=0; i--)  //循环输出数组a中的元素
		cout<<a[i];
	return 0;
}
