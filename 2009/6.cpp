#include<bits/stdc++.h>
using namespace std;
int solveHanoi(int level){
    if(level==1) return 1; // 当仅需移动一层时，直接移动一次完成
    // 当需移动n层时，
    // 1. 把 A 针上的 (n-1) 个圆盘移动到 B 针（借助 C 针）
    // 2. A 针上的最后一个圆盘移动到 C 针
    // 3. 把 B 针上的 (n-1) 个圆盘移动到 C 针（借助 A 针）
    // 问题规模缩小一次
    return 2*solveHanoi(level-1)+1;
}
int main() {
    int n; scanf("%d", &n);
    int seconds = solveHanoi(n);
    int y,d,h,m,s;
    s=seconds%60;
    m=seconds/60%60;
    h=seconds/60/60%24;
    d=seconds/60/60/24%365;
    y=seconds/60/60/24/365;
    printf("%d years %d days %d hours %d minutes %d seconds", y,d,h,m,s);
}

