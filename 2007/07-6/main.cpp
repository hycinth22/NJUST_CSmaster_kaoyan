#include <iostream> 
int main(){
	int a[]={10,12,5,9,4,5,7,8,6,81};  //��������
	int t = 0;  //��¼��������������Ԫ�صĵ�һ��Ԫ�ص��±�
	int b = 0;  //��¼��������Ԫ�صĺ�
	int sum = 27;  //sumΪ��������Ԫ�غ͵����ֵ����ʼ��Ϊǰ����Ԫ�صĺ�
	for(int i = 0; i<8; i++){  //��������
		b = a[i]+a[i+1]+a[i+2];  //������������Ԫ�صĺ�
		if(b>sum){  //�����ֵ
			t = i;  //��¼��ǰ��������Ԫ�غ͵����ֵʱ�ĵ�һ��Ԫ�ص��±�
			sum = b;
		}
	}
	std::cout<<t<<std::endl;  //��������ĵ�һ��Ԫ�ص��±�
} 