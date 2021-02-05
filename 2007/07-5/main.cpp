/* 求亲密数a,b（均为正整数）：a的所有因子（含1不含a本身）之和为b
若b的所有因子（含1不含b本身）之和为a，则a,b为亲密数，求满足a<b
的亲密数，键盘输入范围m,n（10<m<n<10000） */ 

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
	int m,n;
	cin>>m>>n;  //输入范围
	for(int a=m;a<=n;a++){
		int b=fun(a);  //将a的所有因子之和赋给b
		if(a==fun(b)&&a<b)  //判断b的所有因子是否等于a且a<b，若是，则输出
			cout<<a <<"  "<<b<<endl;
	}
	return 0;
}

















