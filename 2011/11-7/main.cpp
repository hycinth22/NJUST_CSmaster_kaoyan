/*7������һ���ַ��������������ֺͷ������ַ����磺
	abc2345     345rrf678     jfkld945
������������������Ϊһ�����������δ�ŵ���һ����������b�У���������ϵ����룬��2345��ŵ�b[0],345����b[1]������������
ͳ�Ƴ���Ϊ�ַ����е������������������Щ������Ҫ����������������������������һ��������
��ָ���ַ�����ָ���ָ��������ָ����Ϊ�����βΡ����ļ���test7.cpp��
*/
#include<iostream>
#include <sstream>
using namespace std;

int convertFromString(const string &s) {  //��string�ַ���ת��Ϊint
	istringstream i(s);  
	int x;
	if (i>>x)
		return x;
	return 0;
}
int fun(char *ss, int* aa) {
	int count=0;  //ͳ�Ƴ��ַ����е���������
	char *p,*q;
	p=ss;
	string str;
	while (*p) {
		q=p;
		str="";
		while (!(isdigit(*q)))  //��*q������ʱ��ָ��������
			q++;
		while (isdigit(*q)) {  //��*qΪ����ʱ���������ַ��ӵ�str�ַ����У�Ȼ��ָ��������
			str+=*q;
			q++;
		}
		aa[count++]=convertFromString(str);  //��str�ַ���ת��Ϊint����
		p=q;
	}
	return count;  //�����ַ����е���������

}
int main() {
	char ss[1000];
	int aa[1000];
	cin.getline(ss,1000);  //�����ַ�����getline()���Խ��տո�
	int num=fun(ss,aa);
	cout<<"�ϼ�"<<num<<"������������Ϊ:"<<endl;
	for (int i=0; i<num; i++)
		cout<<aa[i]<<" ";  
	cout<<endl;
}

//int main(int argc, char *argv[]) {
//	char a[100];
//	int b[100];
//	int sum=0,t=0;
//	cin.getline(a,100);
//	a[strlen(a)]='0';
//	fun(a,sum);
//	//cout<<a<<endl;
//	for(int i=0;i<strlen(a);i++){
//		
//		if(isdigit(a[i])){
//			sum=sum*10+(a[i]-'0');
//		}
//		if(sum!=0&&!isdigit(a[i])){
//			//cout<<sum<<"  "<<t<<endl;
//			b[t]=sum;
//			t++;
//		}else if(sum!=0&&a[i]=='0'){
//			b[t]=sum/10;
//		}
//		if(!isdigit(a[i])){
//			sum=0;
//		}
//	}
//	for(int i=0;i<t;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<"����Ϊ��"<<t;
//	
//	return 0;}
