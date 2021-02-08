#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    for(a=1;a<=9;++a)
    for(b=0;b<=9;++b)
    for(c=0;c<=9;++c)
    if(a*100+b*10+c + b*100+c*10+c==532)
        printf("a=%d b=%d c=%d\n",a,b,c);
}

