/*1���ݹ��㷨�����ݹ�ʽ��⣺
	 1, ��n=0�� 
	fun(x,n)=x,  (n=1)
	(2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n  (����)
*/
#include <iostream>
using namespace std;

float fun(int x,int n){
	if(n==0){  //ȡ����ֵʱ�����
		return 1;
	}else if(n==1){  //����fun(x,n)=x, (n=1)�ɵõ�n=1ʱ�ķ���ֵ��x
		return x;
	}else{
		return (2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n;  //���ݹ�ʽ���ؽ��
	}
}

int main() {
	int x,n; 
	cin>>x>>n;
	cout<<fun(x,n)<<endl;  //���ú���
	 
	return 0;
}