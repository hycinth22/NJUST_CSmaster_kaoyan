#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d",&n);
    int i,cnt = 1;
    for(i=2;i<=n; ++i){
        if(i%2==0 || i%3==0 || i%5==0) ++cnt;
        if(cnt==n) break;
    }
    printf("%d", i);
}

