#include <iostream>
using namespace std;
/*�˶�Ա�����������N���˲μ�100�׶��ܱ�������8���ܵ�����η���ʹ������Ŀ���٣�
��ÿ������������١����磺N=8������8ʱ����1�顣N=9ʱ��Ӧ�ֳ�2�飺5���˺�4���ˡ�
����һ����������4-100��֮���ʾ����������
���ÿ������������������Ӵ�С˳����������磬���룺25 ���7,6,6,6*/

int main() {
	int n;
	cin>>n;  //����������
	if(n<4||n>100) {
		cout<<"�Ƿ���"<<endl;
		return 0;
	}
	int g=(n+7)/8;  //������
	if (g>8)  //����8��ֱ�ӷ�8��
		g=8;
	int num=n/g;  //ÿ������
	int r=n%g;  //��������
	for (int i=0; i<r; i++) {  //��������
		cout<<num+1<<" ";
	}
	for (int j=0; j<g-r; j++) {
		cout<<num<<" ";
	}
}
/*int main(int argc, char *argv[]) {
	int n,t,a[8];
	cin>>n;
	if(n%8==0){
		t=n/8;
		for(int i=0;i<t;i++) 
			a[i]=8;
	}else{
		t=n/8+1;
		if(n%t==0){
			for(int i=0;i<t;i++) 
				a[i]=n/t;
		}else{
			for(int i=0;i<t;i++) 
				a[i]=n/t;
			int m=n%t;
			for(int i=0;i<m;i++) 
				a[i]=a[i]+1;
		}
	}
	for(int i=0;i<t-1;i++){
		cout<<a[i]<<",";
	}
	cout<<a[t-1];
	
	
	return 0;
}*/



