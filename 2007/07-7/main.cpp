#include <iostream>
#include<math.h>
using namespace std; 

struct node{  //�����ṹ�壬nextΪ���ָ�룬preΪǰ��ָ�룬dataΪ���ֵ
	node *next;
	node *pre;
	int data;
};

int main(){
	int n,num=0;  //nΪ�������������numΪ�����±꣬��ʼ��Ϊ0
	int a[100],temp;  //temp��������ʱ�Ľ���Ԫ��ֵ
	while(cin>>n&&n!=-1){  //����������
		a[num]=n;  //������������������
		num++;
	}
	for(int i=0;i<num-1;i++){  //�������е�Ԫ�ؽ������򣬽����Ϊ�������У�����ʹ�õ����򷽷�Ϊð������
		for(int j=0;j<num-1-i;j++){
			if(a[j]>a[j+1]){  //���ǰһ��Ԫ�ص�ֵ���ں�һ��Ԫ�ص�ֵ���򽻻�������ֵ
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
		}
	}
	node *h=new node;  //ͷ��� 
	node *cur=new node;  //��ǰ�ڵ� 
	h->next=h;  //������Ϊ�� 
	cur=h;  //��ǰ���ָ��ͷ��� 
	//�����ź���������鰴β�巨���������У���Ϊ���� 
	for(int i=0;i<num;i++){
		node *s=new node;  //�½�����Ľ�� 
		s->data=a[i];  //�������ֵ���򸳸�����Ľ��
		cur->next=s;  //����ǰ���ͺ�̹�ϵ
		s->next=h;
		s->pre=cur;
		cur=s;
	}
	for(int i=0;i<num;i++){  //������������ֵ
		cout<<cur->data<<" ";
		cur=cur->pre;
	}
	return 0;
}
