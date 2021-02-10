#include<bits/stdc++.h>
using namespace std;
map<int, int> r; // 记录余数及其发生位置
int main() {
    int m,n; scanf("%d%d",&m,&n);
    printf("0.");
    int i=1;
    while(m!=0){
        m*=10;
        if(r.count(m)) break;
        r[m]=i++;
        printf("%c", '0'+m/n);
        m=m%n;
    }
    printf("\n");
    for(int t=0; t<r[m]+1; ++t) printf(" ");
    printf("^\n");
    if(m!=0){
        printf("loop begin from %dth pos \n" , r[m]);
    }
}
