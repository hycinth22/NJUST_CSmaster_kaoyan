#include<iostream>
#include<string.h>
using namespace std;

int main() {
	//ö�ٳ���Ҳ����
	/*int sum=0;  //��ʼ���ַ�����ֵ
	char a[100];
	cin>>a;  //�����ַ���
	for(int i=0;i<strlen(a);i++){  //�����ַ����е�ÿ���ַ�����ͬ���ַ���Ӧ���ϲ�ͬ��ֵ
		if(a[i]=='A'){	sum+=1000;	continue;	}  
		if(a[i]=='B'){	sum+=500;	continue;	}
		if(a[i]=='C'){	sum+=100;	continue;	}
		if(a[i]=='D'){	sum+=50;	continue;	}
		if(a[i]=='E'){	sum+=10;	continue;	}
		if(a[i]=='F'){	sum+=5;		continue;	}
		if(a[i]=='G'){	sum+=1;		continue;	}
	}
	cout<<sum<<endl;  //��������
	return 0;*/
	char str[1000];
	int sum=0;
	int num[8]= {1000,500,100,50,10,5,1};  //����ЩֵԤ�ȴ������������ַ�����ʱ��ֱ�Ӽ���
	cin>>str;  //�����ַ��� 
	for(int i=0; i<strlen(str); i++) {  //�����ַ����е�ÿ���ַ�����ͬ���ַ���Ӧ���ϲ�ͬ��ֵ
		sum+=num[str[i]-'A'];
	}
	cout<<sum<<endl;  //��������
	return 0;
}
