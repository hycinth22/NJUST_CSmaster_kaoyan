/*1、n=5时，输出
	25 16 9 4 1
	16 9 4 1 25
	9 4 1 25 16
	4 1 25 16 9
	1 25 16 9 4
第一行规律是5的平方，4的平方.....其中n由用户自己来输入 */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;  //n为输入的整数
	cin>>n;  //输入一个整数
	int	a[100];
	for(int i=1;i<=n;i++){
		a[i]=i*i; //将从1到n的平方存入数组里
	}
	cout<<setw(3);  //setw(n)函数作用为设置字段宽度为n位
	for(int i=n;i>0;i--){  
		for(int j=i;j>0;j--){  //输出每一行1之前的数
			cout<<a[j]<<setw(3);
		}for(int k=n;k>i;k--){  //输出每一行1之后的数
			cout<<a[k]<<setw(3);
		}
		cout<<endl;  //每行结束后的换行 
	}
	return 0;
}


						/**********再做一遍的方法总会比第一次的方法简单些************/ 

//#include <iostream>
//using namespace std;
//int a[100]={-1,0};

//int main(int argc, char *argv[]) {
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		a[i]=i*i;
//	}
//	for(int i=n;i>0;i--){
//		int t=0;
//		for(int j=i;j>0;j--){
//			cout<<a[j]<<" ";
//			t++;
//		}
//		if(t==n) cout<<endl;
//		else{
//			for(int k=n;k>t;k--)
//				cout<<a[k]<<" ";
//			cout<<endl;
//		}
//			
//	}
//	return 0;}
