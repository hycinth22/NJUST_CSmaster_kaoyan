/*3、找出满足下列性质的三位数，输出并统计其个数：
能被 11整除，且三个数位上没有两个数相同。例如121不可以。 
*/ 
#include <iostream>
using namespace std;

int main() {
	int sum=0;  //计数，初值为0
	for(int n=100;n<1000;n++){  //遍历所有三位数
		int a=n/10;  
		if(n%11==0 && n/100!=a%10 && n/100!=n%10 && n%10!=a%10){
//能被 11整除，且三个数位上没有两个数相同
			cout<<n<<"  ";
			sum++;
		}	
	}
	std::cout<<std::endl;  //换行 
	std::cout<<sum;  //输出三位数中能被 11整除，且三个数位上没有两个数相同的数的个数 
	return 0;
}
