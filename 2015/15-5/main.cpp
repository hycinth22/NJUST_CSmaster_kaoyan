/*���������ԡ����������������Ϊ2��һ������������3��5,5��7,11��13.�������100���ڵ�
�������������ԣ�ÿһ������֮���á�-���ָ�����������������Եĸ�����*/
#include <iostream>
#include<math.h>
using namespace std;

bool isshusu(int n) {  //�ж�����
	if (n==2)
		return true;
	if ((n&1==0 )||(n<2))
		return false;
	for (int i=2; i<sqrt(n)+1; i++)  //����Ҫ��sqrt+1�����ǵȺ�
		if (n%i==0)  //������iΪn�����ӣ���nΪ������������false
			return false;
	return true;  //��nΪ����������true
}

int main() {
	int num=0;  //��¼�����Ե���Ŀ
	for(int i=2; i<100; i++) {  //����100���ڵ�������
		if(isshusu(i) && isshusu(i+2)) {  //���ҵ�������������ԣ���������Ŀ��һ
			cout<<i<<"-"<<i+2<<endl;
			num++;
		}
	}
	cout<<"num="<<num<<endl;  //��������Ե���Ŀ
}
