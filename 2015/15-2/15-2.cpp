#include<iostream>
#include<string>
using namespace std;

int cow(int year) {
	if(year<3)  //ĸţ�ӵ����꿪ʼ��������ǰ����ĸţ������Ϊ1ͷ
		return 1;
	else
		return cow(year-1)+cow(year-3);  //�ݹ���ĸţ������
}

int main() {
	for (int i=1; i<=20; i++) {  //������ݣ�����ӵ�һ�굽��20���ĸţ����
		cout<<cow(i-1)<<" ";
	}
}
