#include <iostream>
#include<string.h> 
using namespace std;
char s[100],t[100];

int main(){
	cin>>s>>t;  //输入两个字符串
	int sum=0;  //将t在s中出现的次数初始化为0
	for(int i=0;i<strlen(s);i++){  //遍历字符串s，找t出现的位置和次数
		int flag=0;  //标志位
		for(int j=0;j<strlen(t);j++){  //遍历字符串t
			if(s[i+j]==t[j]){  //判断t中的字符是否与s中的字符匹配
				flag=1;  //若匹配，将标志位置为1
			}else{
				flag=0;  //若t中存在一个字符匹配不上，则将标志位置为0
				break;  //跳出该for循环，停止对t字符串的遍历
			}
		}
		if(flag==1){  //若标志位为1，说明t在s中出现
			sum++;  //出现次数加一
			cout<<i<<" ";  //输出出现的下标
		}
	}
	cout<<endl;  //换行
	cout<<sum;  //输出t在s中出现的总次数
	return 0;
}
