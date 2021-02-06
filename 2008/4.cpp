#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; scanf("%d%d",&n,&m);
    int width = 0, t=n; while(t){width++; t/=10;}
    int fac1=int(pow(10,m)), fac2=int(pow(10,width-m));
    int high=n/fac1,low=n%fac1;
    printf("%d", low*fac2+high);
}

