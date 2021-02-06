/*3、 
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1	
1 2 3 4 5 6 5 4 3 2 1
n由用户输入，格式对，格式不对给5分。*/
#include <iostream>
using namespace std; 

int main() {
	int n;
	cin>>n;  //输入一个整数
	int t=n-1;  
	for(int i=1;i<=n;i++){
		for(int j=2*t;j>0;j--)  //输出每行第一个数字前的空格个数
			cout<<" ";
		t--;  //行数每加一，第一个数字前的空格便少一个
		for(int k=1;k<=i;k++){  //输出每行中间数字之前的数字
			cout<<k<<" ";
		}
		for(int a=i-1;a>=1;a--){  //输出每行中间数字之后的数字
			cout<<a<<" ";
		}
		cout<<endl;  //每行结束后的换行
	}
	return 0;
}
