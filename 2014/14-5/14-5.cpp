#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int sum=1,i; 
	int temp;
	for (i=2;;i++)
	{
		temp=sum*i;  //i�Ľ׳�
		if (temp/sum!=i)  //�������˾�����ѭ��
			break;
		sum=temp;
	}
	cout<<i-1<<"!="<<sum<<endl;  //����ܴﵽ�Ľ׳˵����ֵ����
	return 0;
}
