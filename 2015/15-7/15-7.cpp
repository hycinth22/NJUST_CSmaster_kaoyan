#include <iostream>
#include<string>
using namespace std;

struct zs {  //���������壬������ݼ�����ִ���
	int data;  
	int num;
};

/**ð������**/
int sort(zs zz[],int n) {
	int temp1,temp2;
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-1-i; j++) {
			if(zz[j].num>zz[j+1].num) {
				temp1=zz[j].num;
				zz[j].num=zz[j+1].num;
				zz[j+1].num=temp1;
				temp2=zz[j].data;
				zz[j].data=zz[j+1].data;
				zz[j+1].data=temp2;
			}
		}
	}
}

int main() {
	int n,t=0,count=0;
	zs zs[31];
	int i;
	while(cin>>n&&(n!=-1)) {  //����������ֱ������-1����
		if(t==0) {  //��һ����
			zs[t].data=n;
			zs[t].num=1;
			t++;
		} else {
			for(i=0; i<t; i++) {
				if(zs[i].data==n) {
					//�ظ�
					zs[i].num++;
					break;
				}
			}
			if(i==t) {  //���ظ�
				zs[t].data=n;
				zs[t].num=1;
				t++;
			}
		}
		count++;
	}
	cout<<"�������������Ϊ��"<<count<<endl;
	/*cout<<"����ǰ������Ϊ��"<<endl;
	for(int i=0; i<t; i++) {
		cout<<"����Ϊ:"<<zs[i].data<<"������Ϊ:"<<zs[i].num<<endl;
	}*/
	sort(zs,t);
	cout<<endl;
	cout<<"����������Ϊ��"<<endl;
	for(int i=0; i<t; i++) {
		cout<<zs[i].data<<":"<<zs[i].num<<endl;
	}
	return 0;
}
