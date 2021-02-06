#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    for(int i=0;i<s.size();++i){
        if(isdigit(s[i])) cout<<i+1<<" ";
    }
    for(int i=0;i<s.size();++i){
        if(isalpha(s[i]))
        cout<<char(toupper(s[i]));
        else
        cout<<s[i];
    }
}

