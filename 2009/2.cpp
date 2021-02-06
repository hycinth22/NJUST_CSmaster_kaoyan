#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    double sum=0.0;
    for(int i=1;i<=n;++i){
        sum+=cos(i);
        sum+=i*i;
        sum+=1.0/i;
    }
    printf("%f",sum);
}

