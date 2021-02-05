#include <iostream>
#include<math.h>
using namespace std; 

struct node{  //建立结构体，next为后继指针，pre为前驱指针，data为结点值
	node *next;
	node *pre;
	int data;
};

int main(){
	int n,num=0;  //n为输入的正整数，num为数组下标，初始化为0
	int a[100],temp;  //temp用于排序时的交换元素值
	while(cin>>n&&n!=-1){  //输入正整数
		a[num]=n;  //将正整数存入数组中
		num++;
	}
	for(int i=0;i<num-1;i++){  //对数组中的元素进行排序，将其变为升序序列，这里使用的排序方法为冒泡排序
		for(int j=0;j<num-1-i;j++){
			if(a[j]>a[j+1]){  //如果前一个元素的值大于后一个元素的值，则交换这两个值
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
		}
	}
	node *h=new node;  //头结点 
	node *cur=new node;  //当前节点 
	h->next=h;  //置链表为空 
	cur=h;  //当前结点指向头结点 
	//将已排好升序的数组按尾插法插入链表中，则为降序 
	for(int i=0;i<num;i++){
		node *s=new node;  //新建插入的结点 
		s->data=a[i];  //将数组的值按序赋给链表的结点
		cur->next=s;  //建立前驱和后继关系
		s->next=h;
		s->pre=cur;
		cur=s;
	}
	for(int i=0;i<num;i++){  //遍历输出链表的值
		cout<<cur->data<<" ";
		cur=cur->pre;
	}
	return 0;
}
