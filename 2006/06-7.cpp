#include<iostream>
#include<cmath>
using namespace std;

int fac(int n) { //ͳ�Ƹ����Ǽ�λ��
	int count = 0;
	while (n) {
		n = n/10; //nÿ�γ���һ��10��n����һλ 
		count++;  //ÿѭ��һ�Σ�λ���ͼ�һ 
	}
	return count;  //����λ����ֵ
}

int main() {
	for (int i = 1;; i++) {
		int b = i%10;  //ȡĩβ����
		int c = i/10;  //ȡ����ĩβ֮������
		if ((b*pow(10,fac(i)-1)+c) == 4*i) {
		    //ͨ����ѧ��ϵ�����λ֮�������
			cout<<i<<endl;
			break;
		}
	}
}
