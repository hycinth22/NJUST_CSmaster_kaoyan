#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d",&n);
    
    // ����
    for(int i=0;i<n-1;++i) printf(" ");
    printf("*\n");
    
    // ��
    for(int li=1;li<n;++li){
        for(int i=0;i<n-li-1;++i) printf(" ");
        printf("*");
        for(int i=0;i<li-1;++i) printf(" ");

        printf(" ");

        for(int i=0;i<li-1;++i) printf(" ");
        printf("*");
        for(int i=0;i<n-li-1;++i) printf(" ");
        printf("\n");
    }
    
    // ��
    for(int li=n-2;li>=1;--li){
        for(int i=0;i<n-li-1;++i) printf(" ");
        printf("*");
        for(int i=0;i<li-1;++i) printf(" ");

        printf(" ");

        for(int i=0;i<li-1;++i) printf(" ");
        printf("*");
        for(int i=0;i<n-li-1;++i) printf(" ");
        printf("\n");
    }
    
    // β��
    for(int i=0;i<n-1;++i) printf(" ");
    printf("*\n");

    
}

