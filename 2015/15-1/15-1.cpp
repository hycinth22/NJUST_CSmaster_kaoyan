#include <iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin>>str;  //输入字符串
	int sum=0;  //初始化十进制各位数之和为0
	for(int i=0; i<str.length(); i++)  //遍历字符串的每一位，将字符转化为int加入总和中
		sum+=str[i]-'0';
	cout<<sum<<endl;  //输出总和
}
