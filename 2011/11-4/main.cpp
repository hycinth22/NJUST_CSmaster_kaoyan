/*4����a��b��c����0��9֮������֣�abc��bcc��������λ�������У�abc+bcc=532��
����������������a��b��c��ֵ���ļ���test4.cpp��*/
#include <iostream>
using namespace std;

int main() {
	for(int a=1;a<10;a++){  //����a�����п��ܵ�ȡֵ
		for(int b=1;b<10;b++){  //����b�����п��ܵ�ȡֵ
			for(int c=0;c<10;c++){  //����c�����п��ܵ�ȡֵ
				if((a*100+b*10+c)+(b*100+c*10+c)==532)  //�ж��Ƿ�����������������
					cout<<a<<"  "<<b<<"  "<<c<<endl;  //�����㣬�����a,b,c��ֵ
			}
		}
	} 
	return 0;
}
