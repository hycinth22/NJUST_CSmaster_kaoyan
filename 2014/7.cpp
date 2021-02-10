#include<bits/stdc++.h>
#define MAX_N 30
using namespace std;
map<int, int> m;
int v[MAX_N];
inline bool vcmp(int a, int b){ return m.at(a) > m.at(b);}
int main() {
    int x,len=0;
    while(scanf("%d", &x) && x!=-1){
        if(!m.count(x)) v[len++]=x;
        ++m[x];
    }
    printf("cnt:%d\n", len);
    for(int i=0;i<len;i++){
        printf("%d:%d ", v[i], m[v[i]]);
    }
    printf("\n");
    sort(v, v+len, vcmp);
    for(int i=0;i<len;i++){
        printf("%d:%d ", v[i], m[v[i]]);
    }
    printf("\n");
}
