#include <iostream>
#include<math.h>
#define N 3  //�޸�N��ֵ�����ͬ�Ļ�����
using namespace std; 

int getP(int x,int y){
	if(y==0) return 1;
	else return getP(x,y-1)*x;  //�ݹ���x��y�η�
}  

int getWei(int n,int *s){
	int num=0;  //��¼ʮ����������λ������ʼ��Ϊ0
	int m=n;  //��ʮ��������n����m
	while(m)  //ͳ��m��λ��
	{
		num++;
		m/=10;
	}
	int index=num-1;  //��ʼ������s���±�
	while (n)  //��n��ÿλ���ְ������ŵ�����s��
	{
		s[index--]=n%10;
		n/=10;
	}
	return num;  //����������λ��
}

int main() {
	int s[N];
	int count=0;  //��¼����������ʼ��Ϊ0
	for (int i=getP(10,N-1);i<getP(10,N);i++)
	{
		getWei(i,s);  //����getWei�����õ��޸ĺ������s
		int sum=0;
		for (int j=0;j<N;j++)  //�����λ�η�֮��
			sum+=getP(s[j],N);
		if (sum==i)  //�ж�i��ÿλ���ֵ�N�η�֮���Ƿ�������������
		{
			cout<<sum<<endl;  //����ȣ������
			count++;  //��������һ
		}	
	}
	cout<<count<<endl;  //���������
}
