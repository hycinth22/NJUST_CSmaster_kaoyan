#include<bits/stdc++.h>
using namespace std;
vector<int> v;

struct listnode{
    listnode* prev, *next;
    int data;
};
listnode* create(){
    listnode* prehead=new listnode(), *p=prehead;
    for(int i=0;i<v.size();++i){
        p->next = new listnode();
        p->next->data = v[i];
        p->next->prev = p;
        p = p->next;
        // printf("create %d ", v[i]);
    }
    p->next = prehead->next;
    prehead->next->prev = p;
    delete prehead;
    return p->next;
}
void reserveOut(listnode* tail){
    listnode*p=tail;
    do{
        printf("%d ", p->data);
        p=p->prev;
    }while(p!=tail);
    printf("\n");
}
int main() {
    int t;
    while(cin>>t && t!=-1) v.push_back(t);
    sort(v.begin(),v.end());
    reserveOut(create()->prev);
}

