#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sum=0; scanf("%d", &n);
    while(n){
        sum+=n%10;
        n/=10;
    }
    printf("%d", sum);
}

