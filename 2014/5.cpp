#include<bits/stdc++.h>
using namespace std;
int main() {
    long long x=1,y=1;
    while(x*y<INT_MAX) x*=y++;
    printf("%d!=%d", int(y-1), int(x));
}

