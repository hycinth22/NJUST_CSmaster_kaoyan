#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c;
	int count=0;  //��λ������������λ����������ͬ�������ܸ���
	for(int i=100; i<1000; i+=2) {  //ż��i+=2
		a=i/100;  //��λ
		b=i/10%10;  //ʮλ
		c=i%10;  //��λ
		if(a==b || b==c || a==c) {
			cout<<i<<" ";  //�������λ��
			count++;  //�ܸ�����һ
			if(count%10==0)  //ÿ���10�����־ͻ���
				cout<<endl;
		}
	}
	cout<<endl;  //���� 
	cout<<"total num:"<<count<<endl;  //�������Ŀ
}
