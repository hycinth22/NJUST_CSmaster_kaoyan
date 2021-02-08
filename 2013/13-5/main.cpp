/*5、如果正整数A的全部因子（包括1，但不包括A本身）之和等于B，
且B的全部因子之和也等于A，则A和B成为一对亲密数。编程计算1-3000的全部亲密数对。注意不要重复输出。*/

#include <iostream>
using namespace std;

int fun(int n){
	int sum=0;  //初始化和为0
	for(int i=1;i<n;i++){  //遍历寻找n的因子
		if(n%i==0)  sum+=i;	//判断i是否是n的因子，若是，则将该因子加入总和	
	}
	return sum;
}
int main() {
	int m = 1,n = 3000;
for(int a=m;a<=n;a++){
		int b=fun(a);  //将a的所有因子之和赋给b
		if(a==fun(b)&&a<b)  //判断b的所有因子是否等于a且a<b，若是，则输出
			cout<<a <<"  "<<b<<endl;
	}
	return 0;
}
