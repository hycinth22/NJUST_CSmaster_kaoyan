/*3、求二进制逆序，如 输入10，对应二进制数是1010，其逆序为0101，
对应十进制输出为5（5即为10的逆序数）*/ 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,a;
	int count = 0;  //统计二进制数位
	cin>>n;  //输入一个十进制数字
	int b[100]={0};  //初始化数组
int t = 0;  //初始化数组下标
	while(n>=2){  
		a = n%2;  //求十进制除以2的余数
		n/=2;
		b[t++] = a;  //将余数存入数组
		count++;  //二进制数位加一
	}
	b[t++] = n;  //最后一个数小于2，直接存入数组即可
	count++;   //二进制数位加一
	int sum = 0;  //将逆序二进制数转化后的十进制初始化为0
	for(int i = 0; i<count; i++){
		sum+=pow(2,count-1-i)*b[i];  //将二进制转为十进制数
	}
	cout<<sum;  //输出转化后的十进制数字
}
