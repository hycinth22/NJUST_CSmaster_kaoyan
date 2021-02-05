/*1、递归算法：根据公式求解：
	 1, （n=0） 
	fun(x,n)=x,  (n=1)
	(2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n  (其他)
*/
#include <iostream>
using namespace std;

float fun(int x,int n){
	if(n==0){  //取特殊值时的情况
		return 1;
	}else if(n==1){  //根据fun(x,n)=x, (n=1)可得当n=1时的返回值是x
		return x;
	}else{
		return (2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n;  //根据公式返回结果
	}
}

int main() {
	int x,n; 
	cin>>x>>n;
	cout<<fun(x,n)<<endl;  //调用函数
	 
	return 0;
}