#include <iostream>
#include<math.h>
using namespace std;
/*2������һ�£�32λ����int�ܱ�ʾ��������Ľ׳ˡ�
����y=x!���׳ˣ�����32λ������Χ�ڣ�x���Ϊ���٣�y�ܴﵽ���ֵ�����ܱ�֤�˷�������� */

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
