#include<bits/stdc++.h>
using namespace std;
int f(const char *s, int* n) {
    int t = 0, state = 0, cnt=0;
    while(*s != '\0'){
        if(state==0) t=0;
        if(*s>='0' && *s<='9'){
            t = t*10+(*s-'0');
            state=1;
        } else if(state==1){
            n[cnt++] = t;
            state=0;
        }
        s++;
    }
    if(state==1) n[cnt++] = t;
    return cnt;
}
int main() {
    string s; getline(cin, s);
    int b[256];
    int n = f(s.c_str(), b);
    printf("cnt: %d\n", n);
    for(int i=0;i<n && i<256;i++) printf("%d\n", b[i]);
}

