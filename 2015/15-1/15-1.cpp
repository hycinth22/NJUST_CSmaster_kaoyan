#include <iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin>>str;  //�����ַ���
	int sum=0;  //��ʼ��ʮ���Ƹ�λ��֮��Ϊ0
	for(int i=0; i<str.length(); i++)  //�����ַ�����ÿһλ�����ַ�ת��Ϊint�����ܺ���
		sum+=str[i]-'0';
	cout<<sum<<endl;  //����ܺ�
}
