#include<bits/stdc++.h>
using namespace std;
int x=0x1451;
char str[1024];
int main() {
    cin>>x;
    int i=0,t,b;
    if(x==0) str[i++]='0';
    else if(x<0) {str[i++]='-'; x=-x;}
    b=i;
    while(x>0){
        t=x%16;
        str[i++]=(t<10?'0'+t:'A'+(t-10));
        x/=16;
    }
    str[i]='\0';
    reverse(str+b, str+i);
    printf("%s", str);
}

