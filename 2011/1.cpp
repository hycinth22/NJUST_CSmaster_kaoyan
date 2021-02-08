#include<bits/stdc++.h>
using namespace std;
bool f(int x){
    vector<int> d;
    while(x){
        d.push_back(x%10);
        x/=10;
    }
    int i=0, j=d.size()-1;
    while(i<j){
        if(d[i]!=d[j]) return false;
        ++i; --j;
    }
    return true;
}
int main() {
    int n; scanf("%d", &n);
    for(int i=1;i<n; ++i){
        if(f(i*i)) printf("%d\n", i);
    }
}

