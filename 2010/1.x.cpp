#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t; cin>>s>>t;
    int cnt=0;
    bool match;
    for(int i=0; i<s.size(); i++){
        match = true;
        for(int j=0; i+j<s.size() && j<t.size(); j++){
            if(s[i+j]!=t[j]){
                match = false;
                break;
            }
        }
        if(match){
            ++cnt;
            printf("%d\n", i);
        }
    }
    cout << cnt << endl;
}

