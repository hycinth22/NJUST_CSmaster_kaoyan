#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d",&n);
    int ngroup = (n%8==0?n/8:n/8+1); //使分组数最少
    if(n%ngroup==0)
        for(int i=0;i<ngroup;++i)
            printf("%d\n", n/ngroup);
    else{
        for(int i=0;i<ngroup-1;++i)
            printf("%d\n", n/ngroup+1);
        printf("%d\n", n/ngroup);
    }
}

