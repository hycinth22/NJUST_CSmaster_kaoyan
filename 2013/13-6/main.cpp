/*һ��Nλ��ʮ���������������ÿλ���ֵ�N�η�֮�͵�����������������Ϊ����������20�֣����磺
	��N=3ʱ��153��������������4����
	��N=4ʱ��1634���㣬��3����
	��N=5ʱ��92727���㣬��3����
	��N=6ʱ��548834���㣬��1����
	��N=7ʱ��1741725���㣬��4����
Ҫ�󣺣�1����һ���궨��N������#define N 3
��2������int getP(int x,int y)����x��y�η���
��3������int getWei(int n,int *s)��n��ÿλ���ְ������ŵ�����s�У�����n=567����ôs[0]=5,s[1]=6, s[2]=7,����3����ʾ567��һ��3λ����
	ȷ����N��ֵΪ4��5��6��7ʱ���������ȷ�ṹ��ÿ�����һ����
 */
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
