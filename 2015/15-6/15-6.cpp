#include <iostream>
using namespace std;

int main(){
	int m,n;
	int a[100]={0};//�� 
	int b[100]={0};//������
	cin>>m>>n;
	cout<<"0.";
	for(int i=1;i<100;i++){
		b[m]=i;  //���Ѿ����ֵ����� ֵ��Ϊ0������Ϊ����ֵ 
		m=m*10;  //m��������0 
		a[i]=m/n;  //�� 
		m=m%n;  //���� 
		if(m==0)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<a[j]<<endl;  //ÿ��һ���̣���ӡһ�Σ���Ҫ����һ���ӡ 
			}
			break;
		}
		if(b[m]!=0)  //�ж��Ƿ����Ѿ����ֵ�����ֵ 
		{
			for(int j=1;j<=i;j++)
			{
				cout<<a[j];
			}
			cout<<"    ��"<<b[m]<<"λ��ʼѭ��"; 
			break;
		} 
	} 
	return 0;
} 
