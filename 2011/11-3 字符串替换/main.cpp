/*3����дһ��������void replace(char rs[],char a[],char s1[],const char s2[])��
���ַ���a�в����Ƿ���s1�Ӵ�������У��ͽ�s1�Ӵ��滻Ϊs2����
��󽫽����д�뵽�β�rs���У�дһ�����������Խ�����ļ���test3.cpp��*/
#include <iostream>
#include <cstring>
using namespace std;

const int maxlen=50;
int len=0;

void replace(char rs[],char a[],char s1[],char s2[]){
	for(int i=0;i<strlen(a);i++){  //�����ַ���a���������е�s1�Ӵ�
		int j,index=0;
		for(j=i;j<i+strlen(s1)&&j<strlen(a);j++){
			if(a[j]!=s1[index++])break;
		}
		if(j==i+strlen(s1)){  //�ҵ������ַ���s2�滻��s1
			for(int k=0;k<strlen(s2);k++)rs[len++]=s2[k];
			i+=strlen(s1)-1;
		}
		else rs[len++]=a[i];
		index=0;
	} 
}
int main(){
	char rs[maxlen],a[maxlen],s1[maxlen],s2[maxlen];
	cin>>a>>s1>>s2;  //���������ַ���
	replace(rs,a,s1,s2);  //�����滻����
	for(int i=0;i<len;i++){  //����滻����ַ���
		cout<<rs[i];
	}
	return 0;
}
