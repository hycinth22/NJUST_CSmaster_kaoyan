/*
����ֵ��������һ��������ƽ�����������ɼ������룬
����ǰ�����ν����֮��С��0.00001. 
*/ 
#include <iostream>
#include<math.h>
using namespace std; 
int main(){
	double a,xn,xn1;
	cin>>a;
	xn=a/2;  //��xn��ʼ��Ϊ�м���� 
	xn1=(xn+a/xn)/2;  //������ʽX(n+1)=(Xn+a/Xn)/2 
	while(fabs(xn-xn1)>1e-10){  //����ѭ����ֱ���������������Xn��X��n+1���Ĳ�ľ���ֵС��ĳ��ֵ������Ϊ�ҵ��˾�ȷ��ƽ����
		xn=xn1;
		xn1=(xn+a/xn)/2;
	}
	cout<<xn1;  //���ƽ����
	return 0;	
}
