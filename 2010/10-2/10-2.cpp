#include <iostream>
using namespace std; 
int a[10000]={0,1};
int main() {
	int t=2,n;
	for(int i=2;i<1000;i++){
		//�ѷ�������������˳���������a��
		if(i%2==0||i%3==0||i%5==0)
			a[t++]=i;
	}
	cin>>n;  //������Ҫ�����ĸ�λ���ϵ�����
	cout<<a[n];  //�����λ�ö�Ӧ������
	return 0;
}
