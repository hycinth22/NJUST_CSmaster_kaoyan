#include<iostream>
#include<string.h>
using namespace std;

void convert(int n,char a[]) {  //��ʮ����ת����16���Ƶĺ���
	int i=0,temp;  //iΪ����a���±꣬tempΪ����ÿ�γ���16������
	while(n!=0) {  //ѭ����
		temp=n%16;  
		if(temp>9) {  //����������9ʱ������Ӧʹ�á�A~F����ʾ
			a[i]=temp-10+'A';  //����ĸ��������a
		} else
			a[i]='0'+temp;  //���������ִ�������a
		i++;  //�±��һ
		n=n/16; 
	}
	a[i]='\0';
}

int main() {
	int n;
	char a[100];
	cin>>n;  //��������n
	convert(n,a);  //����ת������
	for(int i=strlen(a)-1; i>=0; i--)  //ѭ���������a�е�Ԫ��
		cout<<a[i];
	return 0;
}
