#include <iostream>
#include<string>

int main(){
	std::string s1,s2;
	std::cin>>s1>>s2;  //���������ַ���
	char max = s1[0];  //��¼��ǰASCII�����ַ�
	int t = 0;  //��¼ASCII�����ַ���λ��
	for(int i = 0; i<s1.length(); i++){  //�����ַ������ҳ�ASCII�����ַ���λ��
		if(s1[i]>max){
			max = s1[i];
			t = i;
		}
	}
	s1.insert(t+1,s2);  //��ASCII�����ַ��ĺ������ڶ����ַ���
	std::cout<<s1<<std::endl;  //����������ַ���
} 
