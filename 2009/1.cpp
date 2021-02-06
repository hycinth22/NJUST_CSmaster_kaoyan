#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=n;i>=1;--i){
        for(int j=0;j<n;++j){
            int t = (n+i-j)%n;
            if(t==0) t=n;
            cout << t*t << "\t";
        }
        cout << endl;
    }
}

