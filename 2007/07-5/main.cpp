/* ��������a,b����Ϊ����������a���������ӣ���1����a����֮��Ϊb
��b���������ӣ���1����b����֮��Ϊa����a,bΪ��������������a<b
�����������������뷶Χm,n��10<m<n<10000�� */ 

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
	int m,n;
	cin>>m>>n;  //���뷶Χ
	for(int a=m;a<=n;a++){
		int b=fun(a);  //��a����������֮�͸���b
		if(a==fun(b)&&a<b)  //�ж�b�����������Ƿ����a��a<b�����ǣ������
			cout<<a <<"  "<<b<<endl;
	}
	return 0;
}

















