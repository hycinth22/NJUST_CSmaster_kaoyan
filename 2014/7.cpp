// TODO:
#include<bits/stdc++.h>
using namespace std;
#define MAX_N 30
map<int, int> m;
multimap<int, int> m2;
int main() {
    int x, cnt=0;
    while(cin >> x && x!=-1){
        ++m[x];
        ++cnt;
    }
    printf("cnt: %d\n", cnt);
    map<int, int>::iterator it;
    for(it=m.begin();it!=m.end();++it){
        printf("%d: %d times\n", it->first, it->second);
        m2.insert(make_pair<int, int>(it->second, it->first));
    }
    printf("---------\n", cnt);
    multimap<int, int>::reverse_iterator rit;
    for(rit=m2.rbegin();rit!=m2.rend();++rit){
        printf("%d: %d times\n", rit->second, rit->first);
    }
}