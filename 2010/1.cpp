#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t; cin>>s>>t;
    int cnt=0;
    string::size_type p=s.find(t);
    while(p!=string::npos){
        ++cnt;
        cout << p << endl;
        p=s.find(t,p+1);
    }
    cout << cnt << endl;
}

