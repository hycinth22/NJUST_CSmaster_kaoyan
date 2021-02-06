#include<bits/stdc++.h>
using namespace std;
// 将一个数的个位移到首位后，如1234-4123
int f(int x){
    if(x==0) return 0;
    int decwidth = 0, t=x; //求其十进制表示下的位数
    while(t){++decwidth; t/=10;}
    return (x%10)*int(pow(10,decwidth-1))+x/10;
}
int main() {
    int i=10;
    while(!( f(i)==4*i )) ++i;
    printf("%d", i);
    
}

