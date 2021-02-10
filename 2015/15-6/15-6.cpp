#include <iostream>
using namespace std;

int main(){
	int m,n;
	int a[100]={0};//商 
	int b[100]={0};//余数‘
	cin>>m>>n;
	cout<<"0.";
	for(int i=1;i<100;i++){
		b[m]=i;  //让已经出现的余数 值不为0，可以为任意值 
		m=m*10;  //m不够除后补0 
		a[i]=m/n;  //商 
		m=m%n;  //余数 
		if(m==0)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<a[j]<<endl;  //每有一个商，打印一次，不要想着一起打印 
			}
			break;
		}
		if(b[m]!=0)  //判断是否是已经出现的余数值 
		{
			for(int j=1;j<=i;j++)
			{
				cout<<a[j];
			}
			cout<<"    从"<<b[m]<<"位开始循环"; 
			break;
		} 
	} 
	return 0;
} 
