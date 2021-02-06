#include<bits/stdc++.h>
using namespace std;
set<string> words;
int main() {
    string s,w; getline(cin, s);
    for(int i=0; i<s.size();++i){
        if(isalpha(s[i]))
        {
            w+=tolower(s[i]);
        }
        else{
            if(w.size()){
                words.insert(w);
                w.clear();
            }
        }
    }
    cout << words.size();
}

