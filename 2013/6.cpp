#include<bits/stdc++.h>
using namespace std;
#define N 7
int getP(int x, int y){
    int r=1;
    for(int i=0;i<y;++i) r*=x;
    return r;
}
int getWei(int n, int *s){
    int t=n, i=0;
    while(t){
        s[i++] = t%10;
        t/=10;
    }
    reverse(s, s+i);
    return i;
}
int a[N];
int main() {
    for(int i=getP(10, N-1); i<getP(10,N)-1; ++i) {
        int l = getWei(i, a), sum = 0;
        for (int j=0;j<l;++j) sum+= getP(a[j],N);
        if (sum==i) printf("%d\n", i);
    }
}

