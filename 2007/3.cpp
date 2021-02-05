#include <bits/stdc++.h>
using namespace std;
int days[]={0,
    31, 28, 31, 30, 31,
    30, 31, 31, 30, 31,
    30, 31
};
int main() {
    int y,m; scanf("%d%d",&y,&m);
    if(y%4==0 && y%100!=0 || y%400==0)
        days[2]=29;
    else days[1]=28;
    int sum=accumulate(days+1, days+1+m, 0);
    printf("%d", sum);
}
