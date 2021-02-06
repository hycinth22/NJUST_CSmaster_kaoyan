#include<bits/stdc++.h>
using namespace std;
void printn(int x, char c){
    char format[256];
    sprintf(format, "%%%dc", x);
    printf(format, c);
}
int main() {
    int n; scanf("%d",&n);
    printn(n, '*'); printf("\n");
    for(int i=1;i<n;++i){
        printn(n-i, '*'); printn(2*i-1, ' '); printn(1, '*');
        printf("\n");
    }
    for(int i=n-2;i>=1;--i){
        printn(n-i, '*'); printn(2*i-1, ' '); printn(1, '*');
        printf("\n");
    }
    printn(n, '*'); printf("\n");
}

