#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,s=0,t=0; scanf("%d%d",&a,&n);
    for(int i=0;i<n;++i){
        t=t*10+a;
        s+=t;
    }
    printf("%d",s);
}

