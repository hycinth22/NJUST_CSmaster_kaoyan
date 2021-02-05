#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,cnt; scanf("%d%d",&a,&cnt);
    int t=a,sum=0;
    while(cnt--){
        sum+=t;
        printf("%d+",t);
        t=10*t+a;
    }
    printf("=%d",sum);
}
