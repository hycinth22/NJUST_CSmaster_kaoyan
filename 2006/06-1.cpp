#include <iostream>
using namespace std;

int main() {
	int m,n,sum,step;  //mΪ������nΪ������sumΪ���Ľ����stepΪ��ʽ����
	cin>>m>>n;  //����m,n;
	sum=0;  //��ʼ��
	step=0;
	for (int i=0; i<n; i++) {  //ѭ���������ĺ�
		step=step*10+m;
		sum=sum+step;
		if (i<n-1)  //��i�Ǵ�0��ʼ�ģ�������С��n-1ʱ�������͡�+����
			cout<<step<<"+";
		else  //��i=n-1ʱ��ѭ��������
			cout<<step<<"=";
	}
	cout<<sum<<endl;
}
