/*
4
15 8 -2 6
31 24 18 71
-3 -9 27 13
17 21 38 69
*/
#include<bits/stdc++.h>
using namespace std;
int d[10][10], s[21];
int main() {
    int n; scanf("%d", &n);
    for(int i=0;i<n; ++i){
    for(int j=0;j<n; ++j){
        scanf("%d", &d[i][j]);
    }
    }
    int k=0;
    for(int i=0;i<n; ++i){
        s[k]=0;
    for(int j=0;j<n; ++j){
        s[k]+=d[i][j];
    }
    ++k;
    }
    for(int i=0;i<n; ++i){
        s[k]=0;
    for(int j=0;j<n; ++j){
        s[k]+=d[j][i];
    }
    ++k;
    }
    s[k]=0;
    for(int i=0;i<n; ++i){
        s[k]+=d[i][i];
    }
    ++k;
    sort(s,s+k, greater<int>());
    for(int i=0;i<k; ++i){
        printf("%d ", s[i]);
    }
}

