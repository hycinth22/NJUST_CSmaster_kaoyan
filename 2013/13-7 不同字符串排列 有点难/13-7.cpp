#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	string s1,s2,s3;  // s1���������ַ�����s2��Ų�ͬ���ַ���
	cin>>s1;  //�����ַ���
	//int t=0;
	for(int i=0;i<s1.length();i++){
		if(s2.find(s1[i])>1000)
			s2+=s1[i];
	}
	set<string> s;  // ��Ų�ͬ���ַ�����ɵ�3����ͬ���ַ���set����ֱ������
	for(int i=0;i<s2.length()-2;i++){
		for(int j=i+1;j<s2.length()-1;j++){
			for(int k=j+1;k<s2.length();k++){
				s3="";
				s3=s3+s2[i]+s2[j]+s2[k];  // ��3���ַ�ƴ�ӳ�һ���ַ���
				s.insert(s3);
			}
		}
	}
	set<string>::iterator it;  //���������
	for(it=s.begin();it!=s.end();it++)  //��������
		cout<<*it<<endl;
	return 0;
}
