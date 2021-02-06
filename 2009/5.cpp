#include<bits/stdc++.h>
using namespace std;
int main() {
    int cnt=0;
    for(int i=100;i<=999;i+=2){
        int a=i/100,b=i/10%10,c=i%10;
        if(a==b || a==c || b==c){
            printf("%d\n",i);
            ++cnt;
        }
    }
    printf("cnt: %d\n", cnt);
}

