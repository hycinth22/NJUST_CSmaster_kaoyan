/*4��дһ���������������ĳ�������һ����n��m���ѵ�mλ�Ƶ���λ�������
����123789 3���س������789123.��������������ʵ�֣�*/ 
#include <iostream>
#include<math.h>
int a[100];
using namespace std;

int main() {
	int n,m,t;
	int a,b,c;
	cin>>n>>m;  //����n,m
	t=pow(10,m);  // 10��m�η� 
	a=n/t;  //��λ
	b=n%t;  //��λ
	c=int(log10(a))+1;  //��λ��λ�� 
	b=b*pow(10,c)+a;  //��λ
	cout<<b;  //������
	return 0;
}
/******************�����ָ���**************̫�鷳********�ݰ�***********/	 
//	int n,m,sum=0;
//	cin>>n>>m;
//	int t=n;
//	for(int i=0;i<m;i++){
//		a[i]=t%10;
//		t/=10;
//	}
//	int u=int(log10(n));
//	for(int i=m-1;i>=0;i--){
//		for(int j=u;j>0;j--){
//			a[i]*=10;
//		}
//		u--;
//		sum+=a[i];
//	}
//	sum+=t;
//	cout<<sum;

