/*1、递归算法：根据公式求解：
	 1, （n=0）
	fun(x,n)=x,  (n=1)
	(2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n  (其他)
*/

#include <bits/stdc++.h>
using namespace std;

int f(int x,int n){
	if(n==0){  //取特殊值时的情况
		return 1;
	}else if(n==1){  //根据fun(x,n)=x, (n=1)可得当n=1时的返回值是x
		return x;
	}
	return (2*n-1)*x-f(x,n-1)-(n-1)*f(x,n-2)/n;
}

int main() {
    printf("%d %d %d", f(2,0), f(2,1), f(2,3));
}
