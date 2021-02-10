#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d",&n);
    int ngroup = (n%8==0?n/8:n/8+1); //使分组数最少
    int k = n%ngroup;
    for(int i=0;i<k;++i)
        printf("%d\n", n/ngroup+1);
    for(int i=0;i<ngroup-k;++i)
        printf("%d\n", n/ngroup);
}

