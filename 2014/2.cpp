#include<bits/stdc++.h>
using namespace std;
int n = 20;
int grow[3]={0,0,1}, a=0;
#define reapAt(now,after) (grow[(now-1+after)%3])
// 注意reapAt(y,0)和reapAt(y,3)实际使用同一存储空间
// 因此循环时注意等reapAt(y,0)的值使用完毕，再修改reapAt(y,3)
int main() {
    for(int y=1;y<=n; ++y)  {
        printf("year %d begin: total %d, mature %d, baby %d/%d/%d \n",
            y, a+grow[0]+grow[1]+grow[2], a,
            reapAt(y, 0), reapAt(y, 1), reapAt(y, 2)
        );
        int grown = reapAt(y, 0);
        a += grown;
        reapAt(y, 3) = a;
        printf("year %d: %d grown\n", y, grown);
        printf("year %d: %d born\n", y, a);
        printf("year %d end: total %d, mature %d, baby %d/%d/%d \n",
            y, a+grow[0]+grow[1]+grow[2], a,
            reapAt(y, 1), reapAt(y, 2), reapAt(y, 3)
        );
        printf("%d\n", a+grow[0]+grow[1]+grow[2]);
    }
}

