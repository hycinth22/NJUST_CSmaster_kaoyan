#include<bits/stdc++.h>
using namespace std;
int solveHanoi(int level){
    if(level==1) return 1; // �������ƶ�һ��ʱ��ֱ���ƶ�һ�����
    // �����ƶ�n��ʱ��
    // 1. �� A ���ϵ� (n-1) ��Բ���ƶ��� B �루���� C �룩
    // 2. A ���ϵ����һ��Բ���ƶ��� C ��
    // 3. �� B ���ϵ� (n-1) ��Բ���ƶ��� C �루���� A �룩
    // �����ģ��Сһ��
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

