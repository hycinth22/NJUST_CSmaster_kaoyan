#include<iostream>
using namespace std;

int main() {
	for(int i=100; i<=999; i++) {
		if(i/100==i%10)  //��֤��λ�͸�λ��ȼ���
			cout<<i<<" ";
	}
	return 0;
}
