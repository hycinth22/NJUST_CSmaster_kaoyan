#include <iostream>
#include<string.h> 
using namespace std;
char s[100],t[100];

int main(){
	cin>>s>>t;  //���������ַ���
	int sum=0;  //��t��s�г��ֵĴ�����ʼ��Ϊ0
	for(int i=0;i<strlen(s);i++){  //�����ַ���s����t���ֵ�λ�úʹ���
		int flag=0;  //��־λ
		for(int j=0;j<strlen(t);j++){  //�����ַ���t
			if(s[i+j]==t[j]){  //�ж�t�е��ַ��Ƿ���s�е��ַ�ƥ��
				flag=1;  //��ƥ�䣬����־λ��Ϊ1
			}else{
				flag=0;  //��t�д���һ���ַ�ƥ�䲻�ϣ��򽫱�־λ��Ϊ0
				break;  //������forѭ����ֹͣ��t�ַ����ı���
			}
		}
		if(flag==1){  //����־λΪ1��˵��t��s�г���
			sum++;  //���ִ�����һ
			cout<<i<<" ";  //������ֵ��±�
		}
	}
	cout<<endl;  //����
	cout<<sum;  //���t��s�г��ֵ��ܴ���
	return 0;
}
