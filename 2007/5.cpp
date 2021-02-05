#include<bits/stdc++.h>
using namespace std;
inline int facsum(int x){
    int sum=0;
    for(int i=1;i<x;i++){
        if (x%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main() {
    int m,n; scanf("%d%d",&m,&n);
    for(int b=m;b<n;b++)
    for(int a=m;a<b;a++)
    {
        if(facsum(a)==b&&facsum(b)==a){
            printf("%d %d\n", a, b);
/*
        for(int i=1;i<a;i++){
            if (a%i==0)
                printf("a=%d has factor %d\n", a, i);
        }
        for(int i=1;i<b;i++){
            if (b%i==0)
            printf("b=%d has factor %d\n", b, i);
        }
*/
        }
    }
}

