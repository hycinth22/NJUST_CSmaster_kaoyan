/*7����������һ����������һ�����У���-1Ϊ��������ı�־��
��-1����Ϊ����ڵ㡣���������򣬰�����ע��Ҳ���Խ������ */ 
//
#include<iostream>
struct node{  //�����ṹ�壬dataΪ���ֵ��nextΪ���ָ��
	int data;
	node *next;
}; 
int main(){
	int temp;  //temp��������ʱ����ֵ
	node *h = new node;  //�½�ͷ���
	node *p = new node;
	node *r = new node;
	node *q;  //�½����ָ��
	h->next = NULL;  //��ʼ������
	p = h;
	r = h;
	int n;  //nΪ���������
	int count = 0;  //ͳ������������ĸ���
	while(std::cin>>n && n!=-1){  //����������������-1ʱֹͣ����
		node *s = new node;  //�½�һ�����
		s->data = n;  //�����ֵΪ�����������
		p->next = s;  //��������ĺ�̹�ϵ
		p = s;
		count++;
	}
	p->next = NULL;  //p��ʱָ�����һ�����
	for(int i = 0; i<count; i++){  //��������
		for(p=h->next,q = p->next; q!=NULL; p = q,q = q->next){  //�������ڵĽ�㰴�������У��˴��õ���ð�����򷽷�
			if(p->data>q->data){  //���ǰһ������ֵ���ں�һ������ֵ���򽻻����������ֵ
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
	while(r->next){  //��ͷ������һ��Ԫ�ؿ�ʼ����������ֵ
		std::cout<<r->next->data<<" ";
		r = r->next;
	}
}
//#include <iostream>
//using namespace std;
//struct node{
//	int data;
//	node *next;
//}; 
///* run this program using the console pauser or add your own getch, system("pause") or input loop*/ 

//int main(int argc, char *argv[]) {
//	int num;
//	node *h=new node;
//	h->next=NULL;//����ͷ��� 
//	node *p=h,*q=h->next;
//	cin>>num;
//	while(num!=-1){
//		
//		node *s=new node;
//		s->data=num;
//		while(q){
//			if(s->data < q->data){
//				s->next=q;
//				p->next=s;
//				break;
//			}else{
//				p=q;
//				q=q->next;
//			}
//		}
//		if(q==NULL){
//			q->next=s; 
//			s->next=NULL;
//		}
//		p=h;
//		q=h->next;
//		cin>>num;
//	}
//	while(q){
//		cout<<q->data<<" ";
//		q=q->next;
//	}
//	return 0;}
