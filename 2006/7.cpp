#include<bits/stdc++.h>
using namespace std;
// ��һ�����ĸ�λ�Ƶ���λ����1234-4123
int f(int x){
    int decwidth = floor(log(x)/log(10)); //����ʮ���Ʊ�ʾ�µ�λ��
    return (x%10)*int(pow(10,decwidth))+x/10;
}
int main() {
    int i=10;
    while(!( f(i)==4*i )) ++i;
    printf("%d", i);
}

