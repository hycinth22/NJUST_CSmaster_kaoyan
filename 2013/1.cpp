#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d", &n);
    string s;
    while(n){
        s+='0'+(n%2);
        n/=2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

