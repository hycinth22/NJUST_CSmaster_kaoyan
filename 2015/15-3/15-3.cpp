#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;  //����������
	if(n<4||n>100) {
		cout<<"�Ƿ���"<<endl;
		return 0;
	}
	int g=(n+7)/8;  //������
	if (g>8)  //����8��ֱ�ӷ�8��
		g=8;
	int num=n/g;  //ÿ������
	int r=n%g;  //��������
	for (int i=0; i<r; i++) {  //��������
		cout<<num+1<<" ";
	}
	for (int j=0; j<g-r; j++) {
		cout<<num<<" ";
	}
}
