#include <iostream>
#include<stack> 
using namespace std; 
/*1����������һ��ʮ����������ת��Ϊ������������ʾ������*/
int main() {
	stack<int> s;  //��ջ
	int n;
	cin>>n;  //����һ��ʮ������
	while(n!=0){
		s.push(n%2);  //����������ջ��
		n/=2;
	}
	while(s.empty()!=true){
		cout<<s.top();  //���ջ��Ԫ��
		s.pop();  //��ջ��Ԫ�ص���
	}
	return 0;
}
