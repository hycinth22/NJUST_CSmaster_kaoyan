#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) { //���ѭ��9��
		//�ڲ�ѭ�������ӡ��Ϣ����Ļ��
		for (int j=1; j<=i; j++) {
			cout << j << "*" << i <<"="<< i*j << "\t";
		}
//�ڲ�ѭ���������ӡһ���س�����
		cout << endl;
	}
	return 0;
}
