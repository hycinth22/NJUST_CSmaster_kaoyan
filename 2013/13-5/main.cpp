/*5�����������A��ȫ�����ӣ�����1����������A����֮�͵���B��
��B��ȫ������֮��Ҳ����A����A��B��Ϊһ������������̼���1-3000��ȫ���������ԡ�ע�ⲻҪ�ظ������*/

#include <iostream>
using namespace std;

int fun(int n){
	int sum=0;  //��ʼ����Ϊ0
	for(int i=1;i<n;i++){  //����Ѱ��n������
		if(n%i==0)  sum+=i;	//�ж�i�Ƿ���n�����ӣ����ǣ��򽫸����Ӽ����ܺ�	
	}
	return sum;
}
int main() {
	int m = 1,n = 3000;
for(int a=m;a<=n;a++){
		int b=fun(a);  //��a����������֮�͸���b
		if(a==fun(b)&&a<b)  //�ж�b�����������Ƿ����a��a<b�����ǣ������
			cout<<a <<"  "<<b<<endl;
	}
	return 0;
}
