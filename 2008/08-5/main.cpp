#include <iostream>
#include<iomanip>
using namespace std; 
//方法很多，也可以分成几段来打印
int main() {
	int n;
	cin>>n;
	cout<<setw(n)<<"*"<<endl;
	for(int i=1;i<n;i++){  //打印上半段
		cout<<setw(n-i)<<"*"<<setw(2*i)<<"*";
		cout<<endl;
	}
	for(int i=n-1;i>1;i--){  //打印下半段
		cout<<setw(n-i+1)<<"*"<<setw(2*(i-1))<<"*";
		cout<<endl;
	}
	cout<<setw(n)<<"*"<<endl;
	return 0;
}
