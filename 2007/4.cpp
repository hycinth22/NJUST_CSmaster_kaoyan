#include <bits/stdc++.h>
using namespace std;
//牛顿迭代法的普通形式：x_n+1 = x_n - f(x_n)/f'(x_n)
// 求a的平方根，即求解x^2-a=0
// f(x)=x^2-a f'(x)=2x
// 推出迭代公式具体形式 x_n+1 = x_n - (x_n^2-a)/2/x_n
// 通分整理可得 x_n+1 = (x_n+a/x_n)/2;
// 2^(1/2)=1.4142135623731
int main() {
    int a; scanf("%d",&a);
    double x=a;
    while(fabs(x*x-a)>1e-13){
        x=(x+a/x)/2;
        printf("%.13f\n", x);
    }
    printf("%.13f\n", x);
}
