#include<bits/stdc++.h>
using namespace std;
bool isSolution(int t){
    for (int i=0;i<5;++i){
        if((t-1)%5) return false;
        t = (t-1)*4/5;
    }
    return true;
}
int main() {
    int s=1;
    while(!isSolution(s)) ++s;
    cout << s;
}
