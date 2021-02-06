/*7、键盘输入一组数，存入一链表中，以-1为链表结束的标志，
且-1不作为链表节点。并对其排序，按升序（注：也可以降序）输出 */ 
//
#include<iostream>
struct node{  //建立结构体，data为结点值，next为后继指针
	int data;
	node *next;
}; 
int main(){
	int temp;  //temp用于排序时交换值
	node *h = new node;  //新建头结点
	node *p = new node;
	node *r = new node;
	node *q;  //新建结点指针
	h->next = NULL;  //初始化链表
	p = h;
	r = h;
	int n;  //n为输入的整数
	int count = 0;  //统计输入的整数的个数
	while(std::cin>>n && n!=-1){  //输入整数，当输入-1时停止输入
		node *s = new node;  //新建一个结点
		s->data = n;  //令结点的值为刚输入的整数
		p->next = s;  //建立结点间的后继关系
		p = s;
		count++;
	}
	p->next = NULL;  //p此时指向最后一个结点
	for(int i = 0; i<count; i++){  //遍历链表
		for(p=h->next,q = p->next; q!=NULL; p = q,q = q->next){  //将链表内的结点按升序排列，此处用的是冒泡排序方法
			if(p->data>q->data){  //如果前一个结点的值大于后一个结点的值，则交换这两个结点值
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
	while(r->next){  //从头结点的下一个元素开始遍历输出结点值
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
//	h->next=NULL;//建立头结点 
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
