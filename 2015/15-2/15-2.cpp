#include<iostream>
#include<string>
using namespace std;

int cow(int year) {
	if(year<3)  //母牛从第三年开始生产，则前两年母牛的数量为1头
		return 1;
	else
		return cow(year-1)+cow(year-3);  //递归求母牛的数量
}

int main() {
	for (int i=1; i<=20; i++) {  //遍历年份，输出从第一年到第20年的母牛数量
		cout<<cow(i-1)<<" ";
	}
}
