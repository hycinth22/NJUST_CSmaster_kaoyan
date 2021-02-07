#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y=0; cin >> x;
    while(x){
        y=2*y+x%2;
        x/=2;
    }
    cout << y << endl;
}

