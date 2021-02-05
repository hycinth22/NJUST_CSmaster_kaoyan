#include<bits/stdc++.h>
using namespace std;
int a[]={10,12,5,9,4,5,7,8,6,81};
int la = sizeof(a)/sizeof(a[0]);
int main() {
    int sum = -10e7, ans;
    for (int i=0;i+2<la;++i){
        if(a[i]+a[i+1]+a[i+2]>sum){
            sum=a[i]+a[i+1]+a[i+2];
            ans=i;
        }
    }
    printf("%d", ans);
}

