#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
};
node* head = new node(), *tail = head;
void append(int x){
    tail->next = new node();
    tail->next->val = x;
    tail->next->next = 0;
    tail = tail->next;
}
void sortlist() {
    // 插入排序
    node* nh = new node();
    node* m=head->next,*p;
    while(m){
        // 取出节点m
        head->next = m->next;
        // 找到m应该插入的位置的前驱节点p
        p=nh;
        while(p->next && p->next->val < m->val) p=p->next;
        // 插入
        m->next = p->next;
        p->next = m;
        // 继续遍历
        m=head->next;
    }
    delete head;
    head=nh;
}
void out(){
    node* t = head;
    while(t->next){
        t = t->next;
        printf("%d ", t->val);
    }
}
int main() {
    int x;
    while(cin >> x && x!=-1) append(x);
    sortlist();
    out();
}

