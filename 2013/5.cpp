#include<bits/stdc++.h>
#define MAX_N 300
using namespace std;
// 注意此题是因子，而不是质因数分解。每个数字至多出现一次。
int f(int x){
    int sumpf=0;
    for(int i=1; i<x; i++){
        if(x%i==0) sumpf+=i;
    }
    return sumpf;
}
int main() {
    for(int i=2;i<MAX_N;++i){
        int j=f(i);
        if(f(j)==i) printf("%d %d\n", i, j);
    }
}

