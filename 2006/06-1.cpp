#include <iostream>
using namespace std;

int main() {
	int m,n,sum,step;  //m为整数，n为项数，sum为最后的结果，step为算式的项
	cin>>m>>n;  //输入m,n;
	sum=0;  //初始化
	step=0;
	for (int i=0; i<n; i++) {  //循环计算各项的和
		step=step*10+m;
		sum=sum+step;
		if (i<n-1)  //因i是从0开始的，则当项数小于n-1时，输出项和“+”；
			cout<<step<<"+";
		else  //当i=n-1时，循环结束；
			cout<<step<<"=";
	}
	cout<<sum<<endl;
}
