/* ʮ���Ƽӷ���ʽΪs=a+aa+aaa+...,n����������ӣ�����a��1��9����n��1��9����������ֵs��
��1����a=1,n=1,��s=1��
��2����a=1,n=2,��s=1+11=12
��3����a=2,n=3,��s=2+22+222=246*/
#include <iostream>
using namespace std; 

int main() {
	int m,n,sum,s;  //mΪ������nΪ������sumΪ���Ľ����sΪ��ʽ����
	cin>>m>>n;  //����m,n
	s=m; sum=m;  //��ʼ��
	for(int i=1;i<n;i++){  //ѭ���������ĺ�
		s=s*10+m;
		sum+=s;
	}
	cout<<sum<<endl;  //����ܺ�
	return 0;
}
