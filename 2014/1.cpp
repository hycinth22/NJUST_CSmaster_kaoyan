#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt=0; scanf("%d", &n);
    while(n){
        ++cnt;
        n/=10;
    }
    printf("%d", cnt);
}

