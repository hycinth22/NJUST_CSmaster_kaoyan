#include<bits/stdc++.h>
using namespace std;
set<char> ch;
int main() {
    string s; cin >> s;
    for(int i=0; i<s.size();++i){
        ch.insert(s[i]);
    }
    if(ch.size()<3) {
        printf("None.\n");
        return 0;
    }
    vector<char> v(ch.begin(), ch.end());
    for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
    for(int k=j+1;k<v.size();k++){
        printf("%c%c%c\n",v[i],v[j],v[k]);
    }}}
}

