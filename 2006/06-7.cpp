#include<iostream>
#include<cmath>
using namespace std;

int fac(int n) { //统计该数是几位数
	int count = 0;
	while (n) {
		n = n/10; //n每次除以一次10，n就少一位 
		count++;  //每循环一次，位数就加一 
	}
	return count;  //返回位数的值
}

int main() {
	for (int i = 1;; i++) {
		int b = i%10;  //取末尾数字
		int c = i/10;  //取除了末尾之外数字
		if ((b*pow(10,fac(i)-1)+c) == 4*i) {
		    //通过数学关系算出移位之后的数字
			cout<<i<<endl;
			break;
		}
	}
}
